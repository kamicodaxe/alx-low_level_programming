#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = 0, word_len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}

	if (count == 0)
		return (NULL);

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		if (str[i]=!= ' ')
		{
			i++;
			continue;
		}
	
		word_len = 0;
		j = i;

		while (str[j] != ' ' && str[j] != '\0')
		{
			word_len++;
			j++;
		}

		words[k] = malloc((word_len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (i = 0; i < k; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_len; j++, i++)
			words[k][j] = str[i];
		words[k][j] = '\0';
		k++;
	}

	words[k] = NULL;

	return (words);
}

