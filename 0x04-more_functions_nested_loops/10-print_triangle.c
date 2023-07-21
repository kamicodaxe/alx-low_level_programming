#include "main.h"

/**
 * print_triangle - prints triangle, ends with a new line.
 * @size: int, size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int row, spaces_to_print, chars_to_print;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		spaces_to_print = size - row;
		chars_to_print = row;

		while (spaces_to_print > 0)
		{
			_putchar(' ');
			spaces_to_print--;
		}

		while (chars_to_print > 0)
		{
			_putchar('#');
			chars_to_print--;
		}
		_putchar('\n');
	}

}
