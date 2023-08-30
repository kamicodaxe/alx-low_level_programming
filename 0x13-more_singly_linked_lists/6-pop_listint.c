#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a list and returns its data.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = temp->n;
	free(temp);
	return (n);
}
