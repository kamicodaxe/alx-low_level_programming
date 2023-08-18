#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function that prints a name
 * @name: Pointer to the name to be printed
 * @f: Pointer to the function used to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
