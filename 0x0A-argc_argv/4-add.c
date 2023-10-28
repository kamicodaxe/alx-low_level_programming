#include <stdio.h>
#include <stdlib.h>

/**
 * hasDigitsOnly - Checks if a string contains only digits
 *
 * @str: Pointer to the string to be checked
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int hasDigitsOnly(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point of the program
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on successful execution
 */
int main(int argc, char **argv)
{
	int sum = 0;
	(void)argc;

	while (argv++ && *argv != NULL)
	{
		if (hasDigitsOnly(*argv))
		{
			sum += atoi(*argv);
			continue;
		}
		puts("Error");
		return (0);
	}

	printf("%d\n", sum);
	return (0);
}
