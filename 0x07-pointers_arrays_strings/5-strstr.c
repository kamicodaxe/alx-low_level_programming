#include "main.h"
#include <stddef.h>

/**
 * isSubString - Checks if 'start' is actually the start of the matching
 * substring.
 * @start: Pointer to the potential start of the substring.
 * @needle: Pointer to the substring to be located.
 * Return: 1 if 'start' is the start of the matching substring, 0 otherwise.
 */
int isSubString(char *start, char *needle)
{
	while (*start == *needle)
	{
		if (*needle == '\0')
			return (1);
		start++;
		needle++;
	}
	return (0);
}


/**
 * _strstr - locates a substring in string.
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to be located.
 * Return: Pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (isSubString(haystack, needle) > 0)
				return (haystack);
		}
		haystack++;
	}

	return (NULL);
}

