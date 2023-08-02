#include "main.h"
/**
 * _sqrt_recursion_newton_helper - Helper function to calculate
 * the square root using Newton's method.
 * @n: The number for which the square root is to be calculated.
 * @approx: An approximation of the sqaure root.
 *
 * Return: The natural square root of n, or -1 if n does not have
 * a natural square root.
 */
int _sqrt_recursion_newton_helper(int n, int approx)
{
	int next, nextSquare;

	next = 0.5 * (approx + n / approx);
	nextSquare = next * next;
	if (nextSquare == n)
		return (next);

	if (next <= n / next)
		return (-1);

	return (_sqrt_recursion_newton_helper(n, next));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 * Return: The natural square root of n, or -1 if n does not have
 * a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (_sqrt_recursion_newton_helper(n, n / 2));
}
