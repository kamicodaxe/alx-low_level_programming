#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the opcodes of its own main function.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *main_ptr = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", main_ptr[i]);

	/* Print the last byte without trailing space */
	printf("%02hhx\n", main_ptr[i]);

	return (0);
}
