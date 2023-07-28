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
 * string_toupper - Converts all lowercase characters in a string to uppercase.
 *
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string with all uppercase characters.
 *
 * Description: This function takes a string 'str' as input and converts all
 * lowercase characters in the string to uppercase. The modified string is
 * returned as the result.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isLowerCase(str[i]))
			str[i] = str[i] - 32;
	}

	return (str);

}
