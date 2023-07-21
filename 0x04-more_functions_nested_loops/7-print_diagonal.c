#include "main.h"

/**
 * print_diagonal - prints diagonal.
 * @n: int, diagonal length
 * Return: void
 */
void print_diagonal(int n)
{
	const char SPACE = ' ';
	const char NEW_LINE = '\n';
	const char DIAG_CHAR = '\\';
	const int DIAG_LEN = n;
	int space_len = 0;

	while (n > 0)
	{
		space_len = DIAG_LEN - n;
		while (space_len > 0)
		{
			_putchar(SPACE);
			space_len--;
		}

		_putchar(DIAG_CHAR);
		_putchar(NEW_LINE);
		n--;
	}
}
