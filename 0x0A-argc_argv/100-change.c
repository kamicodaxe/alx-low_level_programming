#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 1 if there are incorrect number of arguments
 * or the value is negative, otherwise, 0
 *
 * Description: Prints the minimum number of coins to make change
 * for a given amount of cents. Available coins: 25, 10, 5, 2, and 1 cent.
 */
int main(int argc, char *argv[])
{
	int cents, i = 0;
	int coins_num = 0;
	int available_coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (; i < 5; i++)
	{
		coins_num += cents / available_coins[i];
		cents %= available_coins[i];
	}

	printf("%d\n", coins_num);

	return (0);
}

