#include "lists.h"

/**
 *delete_dnodeint_at_index - delete a node in the linked list
 *@head: the head of the linked list
 *@index: the index of the deleted
 *Return: 1 if success otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prv = NULL, *nxt = NULL, *curr = *head;

	if (!head)
		return (-1);
	while (curr)
	{
		if (i == index)
			break;
		curr = curr->next;
		i++;
	}
	if (!curr)
		return (-1);

	prv = curr->prev;
	nxt = curr->next;
	if (nxt)
		nxt->prev = prv;
	if (prv)
		prv->next = nxt;
	else
	{
		*head = nxt;
	}
	free(curr);
	return (1);

}
