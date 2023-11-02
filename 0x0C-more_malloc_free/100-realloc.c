#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: Pointer to the memory address of new pointer with size new_size
 *
 * - If new_size > old_size, the “added” memory should not be initialized
 * - If new_size == old_size do not do anything and return ptr
 * - If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * - If new_size is equal to zero, and ptr is not NULL, then the call is
 * equivalent to free(ptr). Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *newptr;
	size_t i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}

	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		/* Free the original memory block */
		free(ptr);
		return NULL;
	}

	/* Copy old data to newptr */
	for (i = 0; i < old_size; i++)
		*((char *)newptr + i) = *((char *)ptr + i);

	free(ptr);

	return (newptr);
}
