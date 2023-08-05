#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings contaiining the command-line arguments
 *
 * Return: Always 0 (success)
 *
 * Description: multiplies two numbers.
 */
int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
		prod *= atoi(argv[i]);

	printf("%d\n", prod);
	return (0);
}

