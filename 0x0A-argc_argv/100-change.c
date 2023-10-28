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
	int cents = 0, i = 0, coins = 0;
	int change[] = {25, 10, 5, 1, 0};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(*++argv);
	while (change[i] != 0)
	{
		coins += cents / change[i];
		cents %= change[i];
		i++;
	};

	printf("%d\n", coins);

	return (0);
}
