#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: A pointer to the head of the doubly linked list
 * @n: The data to be added to the new node
 *
 * Return: A pointer to the newly added node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (*head != NULL)
		(*head)->prev = new;

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	*head = new;

	return (new);
}
