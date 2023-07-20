#include "main.h"
/**
 * _isupper - checks if c is an upper cased
 * @c: char to test
 * Return: 1 - uppercase, 0 - lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
