#include "lists.h"

/**
 *dlistint_len - a func that return the lenght of the linked list
 *@h: the head of the linked list
 *
 *Return: the lenght of the linked list (i)
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t i = 0;

	if (!curr)
	{
		return (0);
	}
	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
