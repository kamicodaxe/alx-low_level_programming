#include "main.h"
/**
 * print_triangle - prints triangle, ends with a new line.
 * @size: int, size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	const char SPACE = ' ';
	const char NEW_LINE = '\n';
	const char TRIG_CHAR = '#';

	int row, spaces_to_print, chars_to_print;

	if (size <= 0)
	{
		_putchar(NEW_LINE);
		return;
	}

	for (row = 0; row <= size; row++)
	{
		spaces_to_print = size - row;
		chars_to_print = row;

		while (spaces_to_print > 0)
		{
			_putchar(SPACE);
			spaces_to_print--;
		}

		while (chars_to_print > 0)
		{
			_putchar(TRIG_CHAR);
			chars_to_print--;
		}
	}
	_putchar(NEW_LINE);

}
