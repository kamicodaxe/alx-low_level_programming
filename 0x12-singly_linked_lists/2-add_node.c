#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - computes length of string
 * @s: String to determine length
 *
 * Return: Length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - Duplicates a string
 * @s: String to be duplicated
 * Return: Copy of string passed as argument
 */
char *_strdup(const char *s)
{
	int len = 0;
	char *copy;

	len = _strlen(s);
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	copy[len] = '\0';
	do {
		len--;
		/* Copy from last char to first char */
		copy[len] = s[len];
	} while (len >= 0);

	return (copy);
}

/**
 * add_node - Adds node to the top of a linked list
 * @head: Head of the linked list
 * @str: String of the new node
 * Return: A pointer to the added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = _strlen(str);
	new_node->str = _strdup(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
