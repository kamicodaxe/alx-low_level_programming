#include "main.h"

/**
 * _isdigit - checks if c is a digit
 *  @c: int to test
 * Return: 1 - digit, 0 - is not a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
