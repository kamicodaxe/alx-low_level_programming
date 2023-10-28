#include <stdio.h>

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
	(void)argc;

	while (*argv != NULL)
		printf("%s\n", *argv++);

	return (0);
}
