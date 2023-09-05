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
		puts("Usage: cp filename1 filename2\n");
		printf("This program requires 2 arguments only\n");
		return (-1);
	}

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		printf("Could not read source file\n");
		return (-1);
	}

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (dest_fd == -1)
	{
		printf("Error reading dest file\n");
		close(src_fd);
		return (-1);
	}

	result = copy_file(src_fd, dest_fd);

	close(src_fd);
	close(dest_fd);

	return (result);
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

	buffer = malloc(sizeof(char) * 1024);
	while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			free(buffer);
			perror("Error: File I/O error\n");
			return (-1);
		}
	}

	if (bytes_read == -1)
	{
		free(buffer);
		perror("Error: File I/O error\n");
		return (0);
	}

	free(buffer);
	return (0);
}
