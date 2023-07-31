#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: length to copy
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	 unsigned int i = 0;

	if (n <= 0)
		return (dest);

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
