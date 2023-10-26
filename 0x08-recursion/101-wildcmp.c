#include "main.h"

char *get_last_char_ptr(char *s1, char *s2)
{
	char *ptr = '\0';

	while (*s1 != '\0')
	{
		if (*s1 == *s2)
			ptr = s1;
		s1++;
	}
	return (ptr);
}

/**
 * wildcmp - compares two strings.
 * @s1: string
 * @s2: string
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '*')
	{
		while (*s1 == '*')
		{
			s1++;
			if (*s1 == '\0')
				return (1);
		}

		if (*s2 == '\0')
			return (0);

		return (wildcmp(get_last_char_ptr(s2, s1), s1));
	}

	if (*s2 == '*')
	{
		while (*s2 == '*')
		{
			s2++;
			if (*s2 == '\0')
				return (1);
		}

		if (*s1 == '\0')
			return (0);

		return (wildcmp(get_last_char_ptr(s1, s2), s2));
	}

	if (*s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
