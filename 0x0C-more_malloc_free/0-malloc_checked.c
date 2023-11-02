#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: Size of memory to allocate
 *
 * Return: void pointer to address of allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr_malloc;

	ptr_malloc = malloc(b);
	/* Return NULL if allocation fails */
	if (ptr_malloc == NULL)
		exit(98);

	return (ptr_malloc);
}
