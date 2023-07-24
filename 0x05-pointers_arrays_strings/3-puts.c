#include "main.h"

/**
 * _puts - prints a string, followed by a new lne
 * @str: Pointer to a string.
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
