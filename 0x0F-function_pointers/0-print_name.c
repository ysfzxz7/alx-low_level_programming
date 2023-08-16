#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_name - is a funct that print the name
 *@name: the name needs to be printed
 *@f: a pointer to a function
 *@*: the parameter type of the function
 *
 *Return: this funct return nothing just print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	 f(name);
}
