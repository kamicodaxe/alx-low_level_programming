#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in
 * the string @b that is not 0 or 1, or if @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len = strlen(b), dec_number = 0;
	int temp;

	if (!b)
		return (0);

	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		temp = b[j] - '0';
		dec_number += temp * compute_exponent(2, i);
	}
	return (dec_number);
}

/**
 * compute_exponent - Computes the exponentiation of a number.
 * @base: The base number.
 * @exponent: The exponent.
 *
 * Return: The result of number raised to the power of pow.
 */
unsigned int compute_exponent(int base, unsigned int exponent)
{
	unsigned int results = 1;

	while (exponent--)
	{
		results *= base;
	}
	return (results);
}
