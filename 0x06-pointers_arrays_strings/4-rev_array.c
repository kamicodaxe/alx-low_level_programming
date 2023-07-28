#include "main.h"

/**
 * isLowerCase - Checks if a character is a lowercase letter.
 *
 * @ch: The character to check.
 *
 * Return: 1 if the character is a lowercase letter, 0 otherwise.
 */
int isLowerCase(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	return (0);
}

/**
 * reverse_array - Reverses an array of integers.
 *
 * @a: Pointer to the first element of the array.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an array of integers 'a' and the number
 * of elements 'n' in the array, and it reverses the order of the elements
 * in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (n-- && i < n)
	{
		a[i] = a[i] - a[n];
		a[n] = a[i] + a[n];
		a[i] = -a[i] + a[n];
		i++;
	}
}
