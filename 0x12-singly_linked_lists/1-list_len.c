#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - Counts all the elements of a list_t list.
 * @h: Pointer to the list.
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next, count++)
		continue;
	return (count);
}
