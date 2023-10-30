#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: Size/length of array
 * @c: Char to serve  as initial value of each array elmt.
 *
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptrstring;

	if (size == 0)
		return (NULL);

	ptrstring = (char *)malloc(size * sizeof(char));

	while (size--)
		ptrstring[size] = c;

	return (ptrstring);
}
