#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct operation function to perform
 * @s: Operator passed as argument to the program
 * Return: Pointer to the corresponding operation function, NULL if not found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	int i = 0;

	if (s == NULL)
		return (NULL);

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
