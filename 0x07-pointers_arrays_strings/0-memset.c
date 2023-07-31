#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area pointed to by s
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i = 0;

	if (n <= 0)
		return (s);

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
