#include "lists.h"

/**
 *insert_dnodeint_at_index - insert in dll a node
 *@h: the head of the linked list
 *@idx: the index of the node
 *@n: the value of the node
 *Return: the ptr to the new node or null if fails
 */
listint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	unsigned int place = 0;
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint *));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	while (curr->next && idx != place)
	{
		place++;
		curr = curr->next;
	}
	tmp = curr->prev;
	curr->prev = new;
	new->prev = tmp;
	new->next = curr;
	new->next = new->prev

}
