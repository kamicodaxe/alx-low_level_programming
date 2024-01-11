#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list
 * @head: A pointer to the head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
