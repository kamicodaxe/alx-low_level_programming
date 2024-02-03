#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * key_index - Gives the index of a key in a hash table array.
 * @key: The key to find the index for.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	if (key == NULL || size == 0)
		exit(EXIT_FAILURE);

	hash_code = hash_djb2(key);
	return (hash_code % size);
}
