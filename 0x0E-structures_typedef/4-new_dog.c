#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - a func that return the lenght of a string
 *@string: the string gievn
 *Return: the lenght of the string
 */

int _strlen(char *string)
{
	int counter;

	counter = 0;
	while (*string)
	{
		counter++;
		string++;
	}
	return (counter);
}

/**
 *_str - similar to strcpy
 *@d: destination
 *@s: source of the string
 *
 *
 *Return: a ptr to the dest string
 */

char *_str(char *d, char *s)
{
	int p = 0;

	if (d == NULL || s == NULL)
	{
		return (NULL);
	}
	while (*s)
	{
		d[p] = *s;
		s++;
		p++;
	}
	d[p] = '\0';
	return (d);
}
/**
 *new_dog - a function that creat a new dog
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the name of the owner
 *
 *Return: a ptr to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr  = malloc(sizeof(dog_t));

	if (ptr == NULL || name == NULL || owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = malloc(sizeof(char) * _strlen(name) + 1);
	ptr->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		return (NULL);
	}

	ptr->name = _str(ptr->name, name);
	ptr->owner = _str(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}
