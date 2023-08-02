#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a new line, using recursion.
* @s: Pointer to the string to be printed.
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s);
	else
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(++s);
}
