#include "lists.h"

/**
 *list_len - a func that return the lenght of a linkedl
 *@h: the head of the linked list
 *
 *Return: the len of the linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t i = 0;

	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
