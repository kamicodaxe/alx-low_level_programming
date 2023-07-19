#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: Character to test
 * Return: 1 if c is lowerwase,  0 otherwhise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
