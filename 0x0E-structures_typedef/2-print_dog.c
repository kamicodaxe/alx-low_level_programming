#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the struct dog to be printed
 *
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
		return;

	printf("Name: %s\nAge: %0.6f\nOwner: %s\n",
		   d->name != NULL ? d->name : nil,
		   d->age >= 0 ? d->age : 0,
		   d->owner != NULL ? d->owner : nil);
}
