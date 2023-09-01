#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, len = strlen(format);
	char *strtemp;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			strtemp = va_arg(args, char *);
			printf("%s", strtemp == NULL ? "(nil)" : strtemp);
			break;
		default:
			break;
		}

		if (i < len - 1 &&
			(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			 format[i] == 's'))
			printf("%s", ", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
