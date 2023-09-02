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
	unsigned int i, j, len, dec_number = 0;
	int temp;

	if (b == NULL)
		return (0);

	for (i = 0, len = strlen(b), j = len - 1; i < len; i++, j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		temp = b[j] - '0';
		dec_number += temp * (1 << i);
	}
	return (dec_number);
}
