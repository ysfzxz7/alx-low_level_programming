#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - func used to find an int and return its poisition
 *@array: the haystack of the ints
 *@size: the weight of the haystack
 *@cmp: the pointer of the function used
 *
 *Return: the index of the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (!cmp(array[i]))
			return (-1);
		else if (cmp(array[i]))
			return (i);
	}
	return (i);
}
