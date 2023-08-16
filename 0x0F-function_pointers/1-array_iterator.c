#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 *array_iterator - a func that iterate over a array of func
 *@array: the array of argument
 *@size: the size of the array
 *@action: is a pointer to the func to use
 *
 *Return: nothing , just print some data
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	fi (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
