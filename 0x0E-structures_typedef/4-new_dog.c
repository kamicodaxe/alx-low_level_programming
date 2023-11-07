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
 * new_dog - Creates a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Pointer to the newly created dog_t structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = malloc(str_len(name) + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(str_len(owner) + 1);
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}

	str_cpy(new->name, name);
	str_cpy(new->owner, owner);
	new->age = age;

	return (new);
}
