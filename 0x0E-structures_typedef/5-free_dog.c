#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees the memory of pointers that used
 * dog's objects.
 * @d: pointer of dog_i object.
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
	}
}
