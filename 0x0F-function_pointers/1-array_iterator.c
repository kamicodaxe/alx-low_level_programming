#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array of integers
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
