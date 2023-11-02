#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members in array
 * @size: Size of each element
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	for (i = 0; i < nmemb * size; i++)
		*((char *)array + i) = '\0';

	return (array);
}
