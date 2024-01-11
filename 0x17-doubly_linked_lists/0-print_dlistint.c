#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: A pointer to the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
