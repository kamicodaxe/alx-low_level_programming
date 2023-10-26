#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion,
 * followed by a new line.
 *
 * @s: Pointer to the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);

	if (*s != '\0')
		_putchar(*s);
}
