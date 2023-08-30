#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Value to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL) // Check if head is NULL
		return NULL;

	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL) // Check if memory allocation failed
		return NULL;

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return new_node;
	}

	listint_t *current = *head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return new_node;
		}
		count++;
		current = current->next;
	}

	free(new_node); // If index is not found, free the allocated memory
	return NULL;
}
