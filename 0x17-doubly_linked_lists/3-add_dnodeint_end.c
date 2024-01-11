#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: A pointer to the head of the doubly linked list
 * @n: The data to be added to the new node
 *
 * Return: A pointer to the newly added node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last_item = NULL;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last_item = *head;
	while (last_item->next != NULL)
		last_item = last_item->next;

	new->prev = last_item;
	last_item->next = new;

	return (new);
}
