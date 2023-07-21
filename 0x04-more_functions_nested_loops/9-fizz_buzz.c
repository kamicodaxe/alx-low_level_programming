#include <stdio.h>

/**
 * main - prints fizz for multiples of 3, buzz for 5,
 * fizzbuzz for multiples of two and three
 * Return: 0 (Success)
 */

int main(void)
{
	const int SIZE = 100;
	int i;

	for (i = 1; i <= SIZE; i++)
	{

		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}

		if (i % 3 == 0)
		{
			printf("fizz");
		}

		if (i % 5 == 0)
		{
			printf("buzz");
		}

		if (i != SIZE)
		{
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}
