#include "main.h"

/**
 * encodeChar - Encodes a character using the ROT13 cipher.
 *
 * @c: The character to be encoded.
 *
 * Return: The ROT13-encoded character.
 */
char encodeChar(char c)
{
	/*Check if the character is an alphabet (lowercase or uppercase)*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		int alphabetSize = 26;

		/* Determine the base value for the character type (lowercase or uppercase) */
		int base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

		/* ROT13 encoding */
		return (((c - base + 13) % alphabetSize) + base);
	}

	/*If the character is not an alphabet, return the character as it is*/
	return (c);
}

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 *
 * @str: Pointer to a string.
 *
 * Return: Pointer to the ROT13-encoded string.
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = encodeChar(str[i]);
		i++;
	}

	/* Return the ROT13-encoded string */
	return str;
}
