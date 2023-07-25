#include "main.h"

/**
* puts2 - A function that prints every other character
* of a string, starting with the first character
* followed by a new line.
* @str: paramieter of type char
*/

void puts2(char *str)
{
	int len = 0;
	int i;
	char *start = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str = start;
	for (i = 0; i < len; i++)
	{
		if (i % 2 != 0 || *str == '\0')
			continue;
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
