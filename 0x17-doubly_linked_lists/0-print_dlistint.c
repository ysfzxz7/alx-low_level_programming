#include "lists.h"
/**
 *print_dlistint - a func that print the db linked list
 *@h: the head of the given linked list
 *Return: the number of node (i)
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t i = 0;

	if (!curr)
		return (0);
	while (curr)
	{
		printf("%d\n", curr->n);
		i++;
		curr = curr->next;
	}
	return (i);
}
