#include "main.h"
#include <stdlib.h>

/**
 * is_separator - Checks if a character is a separator (space, tab, or newline)
 *
 * @c: Character to be checked
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Count the number of words in a string.
 * @str: Input string.
 * Return: Number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	/* Flag to track word boundaries */
	int in_word = 0;

	while (*str)
	{
		if (is_separator(*str))
		{
			in_word = 0; /* Not in a word */
		}
		else if (!in_word)
		{
			in_word = 1; /* Entering a new word */
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: Input string.
 * Return: Pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int num_words, i, j = 0, word_len = 0;
	char **words;

	num_words = count_words(str);

	if (str == NULL || *str == '\0' || num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		while (is_separator(*str))
			str++;

		word_len = 0;
		while (str[word_len] && !is_separator(str[word_len]))
			word_len++;

		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_len; j++)
			words[i][j] = *str++;

		words[i][j] = '\0';
	}

	words[num_words] = NULL;

	return (words);
}
