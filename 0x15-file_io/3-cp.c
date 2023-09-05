#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Copies the content of one file to another file.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char **argv)
{
	int src_fd, dest_fd, result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(src_fd);
		exit(99);
	}

	result = copy_file(src_fd, dest_fd);

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}

	return(result);
}

/**
 * copy_file - Copies the content of one file to another file.
 *
 * @source_fd: The file descriptor of the source file.
 * @dest_fd: The file descriptor of the destination file.
 *
 * Return: 0 on success, -1 on failure, or 100 on a read error.
 */
int copy_file(int source_fd, int dest_fd)
{
	char *buffer;
	ssize_t bytes_read, bytes_written;
	size_t buffer_size = 1024;

	buffer = malloc(sizeof(char) * buffer_size);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(-1);
	}

	while ((bytes_read = read(source_fd, buffer, buffer_size)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't write to file descriptor %d\n", dest_fd);
			exit(-1);
		}
	}

	if (bytes_read == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %d\n", source_fd);
		exit(100);
	}

	free(buffer);
	return(0);
}
