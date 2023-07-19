#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10x in terminal with  _putchar function
 * Return: 0 (Always)
 */
void print_alphabet_x10(void)
{
	int i;
	while (i < 9)
	{
		print_alphabet();
		i++;
		_putchar('\n');
	}

}
