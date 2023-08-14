#include "dog.h"

/**
 *init_dog - a function that initialize a variable of type struct dog
 *@d: a pointer to the the struct
 *@age: age of the dog
 *@name: the name of the dog
 *@owner: the name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
