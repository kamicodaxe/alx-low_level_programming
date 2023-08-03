#include "main.h"

/**
 * check_factor - test if factor of number
 * @num: Number
 * @factor: factor to test
 * Return: 1 if factor, 0 otherwise
 */
int check_factor(int num, int factor)
{
	if (factor < 2)
		return (0);

	if (num % factor == 0)
		return (1);

	return (check_factor(num, factor - 1));
}

/**
 * is_prime_number - Checks for prime numbers
 * @n: Potential prime number
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (!check_factor(n, (n + 1) / 2));
}
