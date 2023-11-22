#include "lists.h"

/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: Head of the list
 * @idx: Index of the new element
 * @n: value of the ne node
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *tmp = *head;
	unsigned int iterator = 0;

	if (!new)
		return (NULL);

	while (tmp && iterator < idx)
	{
		iterator++;
		tmp = tmp->next;
	}

	new->n = n;
	new->next = tmp->next;

	tmp->next = new;

	return (new);
}
