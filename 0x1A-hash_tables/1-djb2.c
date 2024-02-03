#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to be hashed.
 *
 * Return: The computed hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) ^ c;
	}

	return (hash);
}
