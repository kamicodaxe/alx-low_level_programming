#include "main.h"

/**
 * print_sign - checks if c is an alphabetic character
 * @n: int to test
 * Return: 1 - n is positive, 0 - n = 0; -1 - n < 0,  0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
