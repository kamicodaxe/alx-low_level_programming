#include "function_pointers.h"

/*
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: index of the first element for which the cmp function does
 * not return 0. If no element matches, or if size is <= 0, it
 * returns -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i])
				return (i);
		}
	}
	return (-1);
}

