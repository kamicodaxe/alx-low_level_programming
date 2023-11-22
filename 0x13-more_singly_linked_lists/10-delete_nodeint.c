#include "lists.h"

/**
 * delete_nodeint_at_index - Delete_nodeint_at_index
 * @head: Head of thhe list
 * @index: Index of element to delete
 *
 * Return: 1(sucess), -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *previous = NULL;
	unsigned int i;

	if (!head || !(*head))
		return (0);

	for (i = 0; temp && i < index; i++)
	{
		previous = temp;
		temp = temp->next;
	}

	if (!temp)
		return (0);

	if (previous)
		previous->next = temp->next;
	else
		*head = temp->next;

	free(temp);
	return (1);
}