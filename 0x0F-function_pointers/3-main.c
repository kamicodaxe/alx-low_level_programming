#include "3-calc.h"
#include <stdlib.h> /* atoi, NULL */
#include <stdio.h>	/* printf */

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	/* Exit if wrong number of arguments provided */
	if (argc != 4)
	{
		printf("Error\n");
		exit(EXIT_STATUS_WRONG_ARGS_COUNT);
	}

	/* Get operation function pointer */
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(EXIT_STATUS_OPERATOR_NOT_FOUND);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Check that the divisor is not equal to zero */
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(EXIT_STATUS_BAD_DIV_MOD_PARAMS);
	}

	/* Print the result of the operation */
	printf("%d\n", operation(num1, num2));

	return (0);
}
