#include "lists.h"

/**
 * list_len - Computes the length of a linked list
 * @h: Head of the list
 * Return: length of the list (size_t)
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
