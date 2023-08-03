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

/**
 * is_palindrome_helper - Checks if a string is a palindrome using recursion.
 * @s: Pointer to the string to be checked.
 * @i: Starting index for comparison.
 * @len: Length of the substring to compare.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int i, int len)
{
	if (i >= len)
		return (1);

	if (*(s + i) != *(s + len - 1))
		return (0);

	return (is_palindrome_helper(s, i + 1, len - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome using recursion.
 * @s: Pointer to the string to be checked.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, len));
}


