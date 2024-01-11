#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a
 * given index in a doubly linked list
 * @h: A pointer to the head of the doubly linked list
 * @idx: The index at which to insert the new node
 * @n: The data to be added to the new node
 *
 * Return: A pointer to the newly added node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp != NULL)
	{
		if (idx == i)
			break;

		/* Out of bounds condition */
		if (tmp->next == NULL && idx != i + 1)
			return (NULL);

		tmp = tmp->next;
		i++;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp->prev;
	new->next = tmp;

	if (tmp->prev != NULL)
		tmp->prev->next = new;

	tmp->prev = new;

	return (new);
}
