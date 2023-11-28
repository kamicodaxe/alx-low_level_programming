#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header_info - Prints information from the ELF header.
 * @header: Pointer to the ELF header.
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s (Executable file)\n", (header->e_type == ET_EXEC) ? "EXEC" : "Other");
	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	ssize_t bytes_read;
	int fd, failure_code = 98;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return failure_code;
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error: Can't open file");
		return failure_code;
	}

	bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read != sizeof(header))
	{
		perror("Error: Can't read ELF header");
		close(fd);
		return failure_code;
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close(fd);
		return failure_code;
	}

	print_elf_header_info(&header);

	close(fd);
	return 0;
}
