#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function releases the memory occupied by each node in the
 * linked list, starting from the given head node.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
