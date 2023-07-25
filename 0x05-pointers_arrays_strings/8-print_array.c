#include <stdio.h>
#include "main.h"

/**
* print_array - A function that prints n elements of an array
* of integers,followed by a new line.
* @a: pointer variable/parameter of type integer, array pointer
* @n: parameter of type integer, length of the array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n && i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
