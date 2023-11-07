#include "dog.h"
#include <stdlib.h>

/**
 * str_len - Calculates the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * str_cpy - Copies a string from source to destination.
 * @dest: The destination string.
 * @src: The source string.
 */
void str_cpy(char *dest, char *src)
{
	int i = 0;

	while (src != NULL && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to initialize.
 * @name: Pointer to the name string.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = malloc(str_len(name) + 1);
	d->owner = malloc(str_len(owner) + 1);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return;
	}

	str_cpy(d->name, name);
	str_cpy(d->owner, owner);
	d->age = age;
}
