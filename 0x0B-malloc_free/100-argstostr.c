#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int total_length = 0, i, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++;
	}

	result = malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}

	result[k] = '\0';

	return (result);
}

