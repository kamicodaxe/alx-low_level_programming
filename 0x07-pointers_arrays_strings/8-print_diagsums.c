#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, right_sum = 0, left_sum = 0;

	for (i = 0; i < size; i++)
	{
		right_sum += a[i * size + i];
		left_sum += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", right_sum, left_sum);
}
