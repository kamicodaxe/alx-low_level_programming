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

	while (str[len] != '\0')
	{
		len % 2 == 0 ? _putchar(str[len]) : 0;
		len++;
	}
	_putchar('\n');
}
