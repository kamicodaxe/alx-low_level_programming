#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 *
 * Description: This function appends the content of the 'src'
 * string to the end of the 'dest' string, overwriting the null
 * terminator at the end of 'dest'. The resulting concatenated
 * string is returned as the result.
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len])
		len++;

	do {
		dest[i + len] = *src;
		i++;
	} while (*src++);

	return (dest);
}
