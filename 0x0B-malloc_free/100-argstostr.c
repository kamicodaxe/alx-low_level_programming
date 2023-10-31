#include "main.h"
#include <stdlib.h>

#include <stdio.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: Argument count
 * @av: Argument vector
 * Return: Pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	size_t i = 0, j = 0, size = 0;
	char *result, *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Compute size of result */
	for (i = 0; i < (size_t)ac; i++, size++)
		for (s = av[i]; *s != '\0'; s++)
			size++;

	result = (char *)malloc(size);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < (size_t)ac; i++)
	{
		s = av[i];
		while (*s != '\0')
			result[j++] = *s++;

		result[j++] = '\n';
	}

	return (result);
}
