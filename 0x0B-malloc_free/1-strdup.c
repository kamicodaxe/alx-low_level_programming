#include <stdlib.h>

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

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptrstring = malloc((len + 1) * sizeof(char));
	if (ptrstring == NULL)
		return (NULL);

	ptrstring[len] = '\0';
	while (len--)
		ptrstring[len] = str[len];

	return (ptrstring);
}
