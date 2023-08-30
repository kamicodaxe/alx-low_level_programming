#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
