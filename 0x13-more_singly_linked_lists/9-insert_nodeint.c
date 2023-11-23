#include "lists.h"

/**
 * get_len - Computes the length of the length of linked list
 * @head: Head of the list
 *
 * Return: Length of the liked list
 */
size_t get_len(const listint_t *head)
{
	size_t len = 0;

	while (head)
	{
		head = head->next;
		len++;
	}

	return (len);
}

/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: Head of the list
 * @idx: Index of the new element
 * @n: value of the ne node
 *
 * Return: pointer to the new node
 *
 * Edge cases:
 * 01: idx > len
 * 02: *head == NULL;
 * 03: head == NULL
 * 04: idx == 0;
 * 05: idx == len
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *tmp = *head;
	size_t current_idx = 0, len = get_len(*head);

	if (!new || idx > len)
	{
		if (new)
			free(new);
		return (NULL);
	}

	new->n = n;
	/* cases 02, 03 */
	if (len < 2 || idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp && current_idx < idx - 1)
	{
		tmp = tmp->next;
		current_idx++;
	}

	/* Case 04 */
	if ((size_t)idx == len)
	{
		tmp->next = new;
		new->next = NULL;
	}
	else
	{
		new->next = tmp->next;
		tmp->next = new;
	}

	return (new);
}
