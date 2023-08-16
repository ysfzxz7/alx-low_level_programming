#include <stddef.h>

#ifndef FUNC_PTR
#define FUNC_PTR
/**
 *in task 0 -> the print_name function used
 *to call two fucntions depending on the user
 *needs, the first one print the name as it is
 *the seconde uppercase it
 */
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

/**
 *this is the prototype of a function that exx=cute the
 *a given function iterating on a on a array of argumnt
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 *a funct that search for a interger
 *
 */
int int_index(int *array, int size, int (*cmp)(int));

/**
 *
 */

#endif
