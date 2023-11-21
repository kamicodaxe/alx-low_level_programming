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
	listint_t *temp = malloc(sizeof(listint_t));

	temp = *head;
	while (temp && temp->next)
		temp = temp->next;

	if (temp == NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);

		temp->n = n;
		temp->next = NULL;

		*head = temp;

		return (temp);
	}

	temp->next = malloc(sizeof(listint_t));
	if (temp->next == NULL)
		return (NULL);

	temp->next->n = n;
	temp->next->next = NULL;

	return (temp);
}
