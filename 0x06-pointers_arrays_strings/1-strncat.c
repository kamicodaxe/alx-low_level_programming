#include "main.h"

/**
 * _strncat - Concatenates the first n characters from src to dest.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of characters to concatenate from src.
 *
 * Return: Pointer to the destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len])
		len++;

	do {
		if (i == n)
		break;

		dest[i + len] = *src;
		i++;
	} while (*src++);

	return (dest);
}
