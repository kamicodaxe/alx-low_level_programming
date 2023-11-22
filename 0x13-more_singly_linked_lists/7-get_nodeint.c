#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t linked list
 * @head: Head of the list
 * @index: Index to search for
 *
 * Return: The nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterator = 0;
	listint_t *tmp = head;

	while (tmp && iterator != index)
	{
		tmp = tmp->next;
		iterator++;
	}

	return (tmp);
}
