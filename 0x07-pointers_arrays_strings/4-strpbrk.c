#include "main.h"
#include <stddef.h>

/**
 * hasChar - checks if char is in string provided
 * @s: string provided
 * @c: char to test
 * Return: 1 if c is in s, 0 otherwise
 */
int hasChar(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}


/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing bytes to be matched
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (hasChar(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
}
