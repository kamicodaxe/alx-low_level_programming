#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10x on terminal
 * Return: 0 (Always)
 */
void print_alphabet_x10(void)
{
	int j = 0;
	int i;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}

}
