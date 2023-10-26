#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string using recursion
 *
 * This function calculates the length of a string recursively.
 *
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
