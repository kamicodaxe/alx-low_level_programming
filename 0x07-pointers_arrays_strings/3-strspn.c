#include "main.h"

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
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: prefix substring
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int freq = 0;

	while (*s != '\0')
	{
		if (hasChar(accept, *s))
			freq++;
		else
			break;
		s++;
	}
	return (freq);
}
