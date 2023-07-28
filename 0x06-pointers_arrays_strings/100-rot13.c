#include "main.h"

/**
 * encodeChar - Encodes a character using the ROT13 cipher.
 *
 * @c: The character to be encoded.
 *
 * Return: The ROT13-encoded character.
 */
int encodeChar(char c)
{
	char dictionary[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"
                        "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	/* Check if the character is an alphabet (lowercase or uppercase) */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		while (dictionary[i] != c)
			i++;

		/* Return the ROT13-encoded character */
		return dictionary[i + 13];
	}

	/* If the character is not an alphabet, return the character as it is */
	return c;
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

