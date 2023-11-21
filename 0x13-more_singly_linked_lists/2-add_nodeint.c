#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node to the list
 * @head: Head of the list
 * @n: value of new node
 *
 * Return: A pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->n = n;
	new->next = (*head);

	*head = new;

	return (new);
}
