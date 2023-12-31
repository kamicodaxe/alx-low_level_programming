#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a linked list
 * @head: Head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
