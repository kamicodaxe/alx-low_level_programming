#include "lists.h"
#include "stdlib.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given
 * index in a doubly linked list
 * @head: A pointer to the head of the doubly linked list
 * @index: The index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1); /* Empty list */

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (tmp != NULL)
	{
		if (i == index)
			break;

		tmp = tmp->next;
		i++;

		if (tmp == NULL && i != index)
			return (-1); /* Index out of bounds*/
	}

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
