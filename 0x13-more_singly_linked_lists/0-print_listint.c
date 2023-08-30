#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
