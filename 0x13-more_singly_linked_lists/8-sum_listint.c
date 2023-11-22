#include "lists.h"

/**
 * sum_listint -  Sum of all the data (n) of a listint_t linked list.
 * @head: Head of the list
 *
 * Return: the sum of values in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
