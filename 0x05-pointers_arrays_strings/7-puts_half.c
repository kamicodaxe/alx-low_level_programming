#include "main.h"

/**
* puts_half - prints half of a string, followed
* by a new line.
* @str: parameter pointer char
*/

void puts_half(char *str)
{
	int length_of_string = 0;
	int start;
	int i = 0;

	while (str[i])
	{
		length_of_string++;
		i++;
	}

	if (length_of_string % 2 == 0)
	{
		start = (length_of_string / 2);
	}
	else
	{
		start = (length_of_string + 1) / 2;
	}

	for (i = start; i < length_of_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
