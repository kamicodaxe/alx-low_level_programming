#include "lists.h"

/**
 * add_nodeint_end - Adds node at end of list
 * @head: Head of the list
 * @n: value of new element to add
 *
 * Return: A pointer to the added node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *tail = *head, *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tail && tail->next)
		tail = tail->next;

	tail->next = new;

	return (new);
}
