#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings (or NULL).
 * @n: The number of strings passed to the function.
 * @...: Variable number of string arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *temp;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		printf("%s", temp == NULL ? "(nil)" : temp);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
