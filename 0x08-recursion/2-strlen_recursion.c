#include "main.h"

/**
* _strlen_recursion - Calculates the length of a string using recursion.
* @s: Pointer to the string whose length is to be calculated.
* Return: The length of the string (number of characters).
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
