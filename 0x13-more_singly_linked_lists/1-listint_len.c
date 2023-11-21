#include "lists.h"

/**
 * listint_len - Computes the length of a linked list
 * @h: Linked list
 *
 * Return: The length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
