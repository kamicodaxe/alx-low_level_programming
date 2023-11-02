#include "main.h"
#include <stdlib.h>

/**
 * _puts - Prints a string followed by a new line to stdout
 * @s: Pointer to the string to be printed
 * Return: The number of characters printed (excluding the null byte)
 */
int _puts(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
	return (len);
}

/**
 * print_error_and_exit - Prints "Error" followed by a new line to stdout
 * and exits the program with status code 98
 */
void print_error_and_exit(void)
{
	_puts("Error");
	exit(98);
}

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int number = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			number = number * 10 + (*s - '0');

		else if (*s != '\0')
			print_error_and_exit();

		else if (number > 0)
			break;
	} while (*s++);

	return (number * sign);
}

/**
 * print_number - Prints an integer followed by a new line to stdout
 * @num: The integer to be printed
 */
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num == 0)
		return;

	if (num / 10 != 0)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments as strings
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{

	if (argc != 3)
		print_error_and_exit();

	print_number((int)_atoi(argv[1]) * (int)_atoi(argv[2]));
	_putchar('\n');

	return (0);
}
