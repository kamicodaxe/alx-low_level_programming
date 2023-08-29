#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");

	}
	return (count);
}
