#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (always)
 *
 * A program that prints the name of the file it was compiled from,
 * followed by a new line.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
