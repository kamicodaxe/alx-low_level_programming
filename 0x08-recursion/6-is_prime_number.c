#include "main.h"

/**
 * isMultipleHelper - Checks if a number is a multiple of any integer
 * from 2 to i
 *
 * This helper function checks if a given number 'num' is a multiple
 * of any integer from 2 to 'i' using recursion.
 *
 * @i: Integer to check for divisibility
 * @num: Number to be checked for being a multiple
 *
 * Return: 1 if 'num' is not a multiple of integer from 2 to 'i', 0 otherwise.
 */
int isMultipleHelper(int i, int num)
{
	if (i < 2)
		return (1);

	if (num % i == 0)
		return (0);

	return (isMultipleHelper(i - 1, num));
}

/**
 * is_prime_number - Checks if a number is a prime number
 *
 * This function checks if a given integer 'n' is a prime number.
 * A prime number is a natural number greater than 1 that has no positive
 * divisors other than 1 and itself.
 *
 * @n: Integer to be checked for primality
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (isMultipleHelper(n - 1, n));
}
