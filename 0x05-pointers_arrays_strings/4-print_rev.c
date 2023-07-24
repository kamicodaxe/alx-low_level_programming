#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new lne
 * @str: Pointer to a string.
 */
void print_rev(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		_putchar(str[len - 1]);
		len--;
	}
	_putchar('\n');
}
