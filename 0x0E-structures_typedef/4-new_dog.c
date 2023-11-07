#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in memory.
 * @str: String to duplicate.
 * Return: Pointer to the duplicated string. NULL if str is NULL or if memory
 * allocation fails.
 */
char *_strdup(char *str)
{
	char *copy;
	size_t len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	/* Allocate memory for copy */
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[len] = '\0';

	return (copy);
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

	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}

	new->age = age;

	return (new);
}
