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

	if (size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	return (array);
}
