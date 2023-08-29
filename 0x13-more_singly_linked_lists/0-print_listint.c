#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = malloc(sizeof(listint_t));
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);

}
