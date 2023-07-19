#include "main.h"

/**
 * _isalpha - checks if c is an alphabetic character
 * @c: Character to test
 * Return: 1 if c is alphabetic,  0 otherwhise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
