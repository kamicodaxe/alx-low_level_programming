#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number using recursion
 *
 * @x: Base number
 * @y: Exponent
 *
 * Return: Result of 'x' raised to the power 'y', or -1 if 'y' is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
