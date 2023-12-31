#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Create or truncate a file and write text content to it.
 *
 * @filename: The name of the file to create or truncate.
 * @text_content: A NULL-terminated string to write to the file.
 *
 *  Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written;

	if (filename == NULL)
		return (-1); /* No filename provided */

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
