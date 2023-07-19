#include "main.h"

/**
 * print_alphabet - Prints the alphabet in terminal with  _putchar function
 * Return: 0 (Always)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);

}
