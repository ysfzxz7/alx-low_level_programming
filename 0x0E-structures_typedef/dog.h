#ifndef DOG_H
#define DOG_H

/**
 *struct dog - is is a struct to creat a dog
 *@name: the name of the dog's
 *@age: the age of the dog
 * @owner: the name of the owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef __init__DOG
#define __init__DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#ifndef PRINT_DOG
#define PRINT_DOG
void print_dog(struct dog *d);
#endif

#ifndef NEW_DOG
#define NEW_DOG
dog_t *new_dog(char *name, float age, char *owner);
#endif

#ifndef FREE
#define FREE
void free_dog(dog_t *d)
#endif
