#include "main.h"

/**
 * isLowerCase - Checks if a character is a lowercase letter.
 *
 * @ch: The character to check.
 *
 * Return: 1 if the character is a lowercase letter, 0 otherwise.
 */
int isLowerCase(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	return (0);
}


/**
 * isWordSeperator - Checks if a character is a word separator.
 *
 * @ch: The character to check.
 *
 * Return: 1 if the character is a word separator, 0 otherwise.
 */
int isWordSeperator(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n' || ch == ',' || ch == ';' ||
			ch == '.' || ch == '!' || ch == '?' || ch == '"' || ch == '(' ||
			ch == ')' || ch == '{' || ch == '}')
		return (1);
	return (0);
}


/**
 * cap_string - Capitalizes all words in a string.
 *
 * @str: Pointer to a string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (isLowerCase(str[i]))
	{
		str[i] = str[i] - 32;
		i++;
	}

	while (str[i] != '\0')
	{
		if (isWordSeperator(str[i - 1]) && isLowerCase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}

