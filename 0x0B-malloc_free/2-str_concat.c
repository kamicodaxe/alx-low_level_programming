#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_len - Calculate the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int str_len(char *str)
{
	size_t len = 0;

	while(*str)
	{
		len++;
		str++;
	}
	return (len);

}

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0;
	int len = str_len(s1) + str_len(s2);

	new_str = malloc((len + 1) * sizeof(char));

	while (*s1)
	{
		new_str[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		new_str[i] = *s2;
		i++;
		s2++;
	}

	new_str[i] = '\0';

	return (new_str);
}

