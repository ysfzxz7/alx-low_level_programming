#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_calloc - a func that allocate memory using malloc
 *@nmemb: the number of elemnent in the array
 *@size: the size of each element in the array
 *
 *Return: NULL if (nmemb || size  == (0) or failed to allocate memo) otherwise
 *a pointer to the newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
