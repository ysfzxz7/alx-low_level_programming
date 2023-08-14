#include <stdio.h>
#include "dog.h"

/**
 *print_dog - a func that prints a struct dog
 *@d: a pointer to the dog struct
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
