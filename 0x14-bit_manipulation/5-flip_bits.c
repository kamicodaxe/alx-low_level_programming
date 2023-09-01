#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to transform one number n to m
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (m == 0 && n == 0)
		return (0);
	return (((m ^ n) & 1) + flip_bits(n >> 1, m >> 1));
}
