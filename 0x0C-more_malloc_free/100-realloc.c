#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_realloc - a fucn that reallocates a memo using malloc and free;
 *@old_size: the size of old ptr
 *@new_size: the new size
 *@ptr: the old allocated memory
 *
 *Return: a pointer to the new reallcated array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_ptr;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		n_ptr = malloc(new_size);
		return (n_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	n_ptr = malloc(new_size);
	if (n_ptr != NULL)
	{
		memcpy(n_ptr, ptr, old_size < new_size ? old_size : new_size);
		free(ptr);
	}
	else
	{
	return (NULL);
	}
	return (n_ptr);
}
