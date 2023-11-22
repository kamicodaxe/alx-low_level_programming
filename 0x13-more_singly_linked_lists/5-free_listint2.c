#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: Head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	head = NULL;
}
