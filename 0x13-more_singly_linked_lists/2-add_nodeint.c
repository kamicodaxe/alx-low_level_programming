#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;

	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
