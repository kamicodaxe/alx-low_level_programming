#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1, number = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			number = number * 10 + (*s - '0');

		else if (number > 0)
			break;
	} while (*s++);

	return (number * sign);
}

