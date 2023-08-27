#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of q string given as parameter.
 * @str: The string to be duplicated.
 *
 * Return: If memory allocation fails or str is NULL, returns NULL.
 * Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t len = 0;

	while (str[len])
		len++;

	new_str = malloc(len * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	while (len--)
		new_str[len] = str[len];

	return (new_str);
}

