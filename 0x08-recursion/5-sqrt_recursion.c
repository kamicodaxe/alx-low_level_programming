#include "main.h"

/**
 * naturalSqrt - Computes the square root of a number using recursion
 *
 * This helper function calculates the square root of a given number 'num'
 * recursively, starting from 'i' as the initial guess.
 *
 * @i: Current guess for square root
 * @num: Number for which square root is to be calculated
 *
 * Return: Square root of 'num' if found, -1 otherwise.
 */
int naturalSqrt(int i, int num)
{
	if (i * i > num)
		return (-1);

	if (i * i == num)
		return (i);

	return (naturalSqrt(i + 1, num));
}

/**
 * _sqrt_recursion - Computes the square root of a non-negative integer
 * using recursion
 *
 * This function calculates the square root of a non-negative integer
 * 'n' recursively.
 *
 * @n: Non-negative integer for which square root is to be calculated
 *
 * Return: Square root of 'n', or -1 if 'n' is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (naturalSqrt(0, n));
}
