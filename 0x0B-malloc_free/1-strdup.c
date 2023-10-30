#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - Copies string and return pointer
 * @str: String to copy
 * Return: creates an array of chars,
 * and initializes it with a specific char
 */
char *_strdup(char *str)
{
	char *ptrstring;
	size_t len = 0;

	while (str[len] != '\0')
		len++;

	ptrstring = malloc(strlen(str) * sizeof(char));
	if (ptrstring == NULL)
		return (NULL);

	ptrstring[len] = '\0';
	while (len--)
		ptrstring[len] = str[len];

	return (ptrstring);
}
