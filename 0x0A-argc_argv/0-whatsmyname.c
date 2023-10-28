#include <stdio.h>

/**
 * main - Print name of program
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on successful execution
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
