#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: Pointer to an string.
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
* puts_half - prints half of a string, followed
* by a new line.
* @str: parameter pointer char
*/

void puts_half(char *str)
{
	int len = _strlen(str);
	int i = (len / 2) + (len % 2);

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
