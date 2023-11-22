#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @h: Linked list
 *
 * Return: The length of the list
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (!h)
			exit(98);

		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}