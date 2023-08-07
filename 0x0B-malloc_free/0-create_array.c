#include "main.h"
#include <stdlib.h>

/**
 *create_array - a func that t mallocate array in the heap
 *@size: the size of the array
 *@c: the type of the array
 *Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(c) * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
