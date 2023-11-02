#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Computes the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	while (s && s[len] != '\0')
		len++;

	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to a newly allocated space in memory which contains the
 * concatenated string, or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t size01, size02, i, j;

	size01 = _strlen(s1);
	size02 = _strlen(s2);

	if (n >= size02)
		n = size02;

	/* Allocate memory for string */
	result = malloc((size01 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* Copy s1 to result */
	for (i = 0; i < size01; i++)
		result[i] = s1[i];

	/* Copy n characters from s2 to result */
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
