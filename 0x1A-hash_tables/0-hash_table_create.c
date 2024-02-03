#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the table
 *
 * Return: hashtable pointer on sucess or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	size_t i = 0;

	if (table == NULL)
	{
		/* Malloc error */
		return (NULL);
	}

	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->size = size;

	return (table);
}
