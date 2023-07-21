#include "main.h"

/**
 * print_square - prints a square.
 * @size: int, size of sqaure
 * Return: void
 */
void print_square(int size)
{
	const char NEW_LINE = '\n';
	const char SQUARE_CHAR = '#';
	int i, j;

	if (size <= 0)
	{
		_putchar(NEW_LINE);
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(SQUARE_CHAR);
		}
		_putchar(NEW_LINE);
	}
}
