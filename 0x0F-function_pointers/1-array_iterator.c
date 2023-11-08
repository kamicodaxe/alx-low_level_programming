#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Applies a function to each element of an integer array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to apply to the elements.
 *
 * Description:
 * This function iterates through the given integer array of the specified size
 * and applies the provided function to each element. If the array or action
 * function is NULL, or if the size is 0, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
