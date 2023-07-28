#include "main.h"

/**
 * print_digit - Helper function to recursively print each digit.
 * @n: The integer whose digits are to be printed.
 */
void print_digit(int n)
{
	if (n == 0)
		return;

	print_digit(n / 10);
	_putchar('0' + (n % 10));
}

/**
 * print_number - Prints an integer using pointers.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	print_digit(n);
}
