#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: Head of the list
*/
void free_list(list_t *head)
{
	list_t *head_copy = head, *next;

	while (head_copy != NULL)
	{
		next = head_copy->next;
		free(head_copy->str);
		free(head_copy);
		head_copy = next;
	}
}
