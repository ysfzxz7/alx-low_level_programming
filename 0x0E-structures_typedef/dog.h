#ifndef DOG_H
#define DOG_H

/**
 *struct dog - is is a struct to creat a dog
 *@name: the name of the dog's
 *@age: the age of the dog
 * @owner: the name of the owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

#ifndef __init__DOG
#define __init__DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#ifndef PRINT_DOG
#define PRINT_DOG
void print_dog(struct dog *d);
#endif



