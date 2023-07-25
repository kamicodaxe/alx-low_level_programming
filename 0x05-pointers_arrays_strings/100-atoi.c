#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int start = 0, i = 0, digit = 0, sign = 1, is_digit = 0;

	for (; s[i] != '\0'; i++)
	{
		is_digit = (s[i] >= '0' && s[i] <= '9') ? 1 : 0;

		if (is_digit && !start)
			start = i + 1;

		if (!is_digit && start)
			break;

		if (is_digit && start)
			digit = digit * 10 + (s[i] - '0');
	}

	if (start > 1 && s[start - 2] == '-')
		sign = -1;

	return (sign * digit);
}

