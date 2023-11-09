#include "lists.h"

/**
 *insert_dnodeint_at_index - insert in dll a node
 *@h: the head of the linked list
 *@idx: the index of the node
 *@n: the value of the node
 *Return: the ptr to the new node or null if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *next, *prev;

	if (!h)
		return (NULL);
	prev = *h;
	next = *h;

	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		*h = new;
		new->next = next;
		if (next)
			next->prev = new;
		new->prev = NULL;
		return (new);
	}
	if (next)
		next = next->next;
	else
		return (NULL);
	for (i = 1; next != NULL && i < idx; i++)
	{
		prev = prev->next;
		next = next->next;
	}
	if (i == idx)
	{
		prev->next = new;
		new->prev = prev;
		new->next = next;
		if (next)
			next->prev = new;
		return (new);
	}
	return (NULL);
}
