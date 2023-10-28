#include <stdio.h>
#include <stdlib.h>

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
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(*++argv) * atoi(*++argv));

	return (0);
}
