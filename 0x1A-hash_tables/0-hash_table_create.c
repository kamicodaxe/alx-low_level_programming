#include "hash_table.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the table
 *
 * Return: hashtable pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		/* Malloc error */
		return (NULL);
	}

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));

	return (table);
}
