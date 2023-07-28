#include "main.h"

/**
 * getEncodedValue - Encodes a character into its leetspeak equivalent.
 *
 * @ch: The character to be encoded.
 *
 * Return: The leetspeak equivalent of the character.
 */
char getEncodedValue(char ch)
{
	char dictionary[] = "aAeEoOtTlL4433007711";
	int i = 0;

    /* Find character's leetspeak equivalent */
	while (dictionary[i] != '\0' && i < 10)
	{
		if (ch == dictionary[i])
			return (dictionary[i + 10]);

		i++;
	}

	return (ch);
}

/**
 * leet - Encodes a string into leetspeak.
 *
 * @str: Pointer to a string.
 *
 * Return: Pointer to the modified leetspeak string.
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = getEncodedValue(str[i]);
		i++;
	}

	return (str);
}

