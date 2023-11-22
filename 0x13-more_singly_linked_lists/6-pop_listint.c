#include "lists.h"

/**
 * pop_listint - Pops head of list
 * @head: Head of list
 *
 * Return: value of head popped
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *node_to_pop = *head;

	if (!*head)
		return (n);

	*head = (*head)->next;

	free(node_to_pop);

	return (n);
}
