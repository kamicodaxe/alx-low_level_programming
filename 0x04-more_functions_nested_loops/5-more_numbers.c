#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times.
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				/* For two-digit numbers, print the first digit */
				_putchar('0' + (j / 10));
			}
			/* Print the second digit */
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
		i++;
	}
}
