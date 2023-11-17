#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - Prints a linked list
 * @h: list head
 * Return: Size of linked list
*/
size_t print_list(const list_t *h)
{
	int len = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		len++;
		h = h->next;
	}

	return (len);
}
