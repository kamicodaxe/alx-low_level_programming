#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10x in terminal with  _putchar function
 * Return: 0 (Always)
 */
void print_alphabet_x10(void)
{
	int j;
	int i;
	while (j < 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		       	_putchar(i);
		}
		j++;
		_putchar('\n');
	}

}
