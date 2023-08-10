#include "main.h"
#include <stdlib.h>

/**
 *_realloc - a fucn that reallocates a memo using malloc and free;
 *@old_size: the size of old ptr
 *@new_size: the new size
 *
 *
 *Return:
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
	if (n_ptr ==NULL)
		return (NULLL);
	else 
	{
		memcpy(n_ptr, ptr, old_size < new_size ? old_size : new_size);
		free(ptr);
	}
	return(n_ptr);
}
