#include "main.h"

/**
 * wildcmp - Compares two strings considering '*' as a wildcard
 *
 * @s1: First string
 * @s2: Second string with '*' as a wildcard character
 *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
		return (1);

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
