#include "main.h"

/**
 * str_length - Calculates the length of a string recursively
 *
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_length(s + 1));
}

/**
 * is_palindrome_helper - Checks if a string is a palindrome using recursion
 *
 * This helper function checks if a given string 's1ptr' is a palindrome
 * by comparing it with 's2ptr' in reverse order recursively.
 *
 * @s1ptr: Pointer to the start of the string
 * @s2ptr: Pointer to the end of the string
 *
 * Return: 1 if 's1ptr' is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s1ptr, char *s2ptr)
{
	if (*s1ptr == '\0')
		return (1);

	if (*s1ptr != *s2ptr)
		return (0);

	return (is_palindrome_helper(s1ptr + 1, s2ptr - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * This function checks if a given string 's' is a palindrome.
 *
 * @s: Pointer to the string to be checked
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, s + str_length(s) - 1));
}
