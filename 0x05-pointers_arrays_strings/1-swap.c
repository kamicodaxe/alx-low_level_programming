#include "main.h"

/**
 * swap_int - swaps the value to two integers
 * @a: Pointer to 1st integer.
 * @b: Pointer to 2nd integer.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
