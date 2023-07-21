#include <stdio.h>

/**
 * main - prints the largest prime factor if 612852475143
 * Return: 0
 */

int main(void)
{
	const long int NUMBER = 612852475143;
	int i;

	for (i = NUMBER / 2; i > 0; i--)
	{
		if (NUMBER % i == 0)
		{
			printf("%d", i);
			printf("\n");
			break;
		}
	}
	return (0);
}
