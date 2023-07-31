#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: search string
 * @c: Character to search
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s++ && *s != c)
	{
		if (*s == '\0')
			return (NULL);
	}
	return (s);
}
