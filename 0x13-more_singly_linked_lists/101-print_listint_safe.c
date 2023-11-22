#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Linked list
 *
 * Return: The length of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;

	while (head != NULL)
	{
		if (!head)
			exit(98);

		printf("%d\n", head->n);
		head = head->next;
		len++;
	}

	return (len);
}
