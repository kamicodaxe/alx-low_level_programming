#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a char.
 * @size: Size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: If size is 0 or memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the newly allocated array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size || !c)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	while (size--)
	{
		array[size] = c;
	}

	return (array);

}
