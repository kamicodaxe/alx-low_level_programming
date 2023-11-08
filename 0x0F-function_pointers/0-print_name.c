#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: pointer to the first char of name
 * @f: pointer to a function that will be executed with name as parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
