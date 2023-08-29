#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
