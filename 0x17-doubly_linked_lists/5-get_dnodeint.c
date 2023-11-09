#include "lists.h"

/**
 *get_dnodeint_at_index - get the node in the index given
 *@head: the head of the doubly linked list
 *@index: the index needs to be returned
 *Return: a ptr to the given node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	while (i != index && curr)
	{
		curr = curr->next;
		i++;
	}
	return (curr);
}
