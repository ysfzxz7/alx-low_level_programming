#include "dog.h"
#include <stdio.h>

/**
 *free_dog - a func that free the dog struct
 *@d: a pot to the struct
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		free(d->name);
	if (d->owner == NULL)
		free(d->owner);
	free(d);
}
