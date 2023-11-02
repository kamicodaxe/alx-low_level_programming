#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min number in array
 * @max: max number in array
 *
 * Return: the pointer to the newly created array
 *
 * The array created should contain all the values
 * from min (included) to max (included), ordered
 * from min to max
 *
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		array[i] = min + i;

	return (array);
}
