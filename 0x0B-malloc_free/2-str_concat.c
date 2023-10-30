#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2:string
 *
 * Return: newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptrstring_cpy;
	size_t len1 = 0,
		   len2 = 0,
		   i = 0;

	while (s1 && s1[len1] != '\0')
		len1++;

	while (s2 && s2[len2] != '\0')
		len2++;

	/* Allocate memory for new string copy */
	ptrstring_cpy = malloc((len1 + len2) * sizeof(char));
	if (ptrstring_cpy == NULL)
		return (NULL);

	/* Add null byte */
	ptrstring_cpy[len1 + len2 - 1] = '\0';

	/* Copy s1 into ptrstring_cpy */
	while (s1 && i < len1)
	{
		ptrstring_cpy[i] = s1[i];
		i++;
	}

	/* Concat s2 to ptrstring_cpy from last to first char */
	while (s2 && len2--)
	{
		ptrstring_cpy[i + len2] = s2[len2];
	}

	return (ptrstring_cpy);
}
