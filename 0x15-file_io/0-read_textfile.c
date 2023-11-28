#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Read and print text from a file to standard output.
 *
 * @filename: The name of the text file to read from.
 * @letters: The number of letters to read and print.
 *
 * Return: Actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0); /* Could not open file*/

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(descriptor);
		return (0); /* Malloc failed */
	}

	bytes_read = read(descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		close(descriptor);
		free(buffer);
		return (-1); /* Read failed */
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(descriptor);
		free(buffer);
		return (0); /* Error */
	}

	close(descriptor);
	free(buffer);

	return (bytes_written);
}
