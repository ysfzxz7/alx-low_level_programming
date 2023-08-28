#include "lists.h"
#include <stddef.h>
/**
 *listint_len - a fun that return the lenght of an array
 *@h: the head of the array
 *Return: the counter is the size of the array
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *curr = h;

	while (curr)
	{
		counter++;
		curr = curr->next;
	}
	return (counter);
}
