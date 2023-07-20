#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 + newline.
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
