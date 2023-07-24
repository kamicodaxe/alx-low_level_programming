#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: Pointer to a string.
 * Return: int length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
