#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first matching element, or -1 if no match or if
 *         the input parameters are invalid.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
			return (idx);
	}

	return (-1);
}
