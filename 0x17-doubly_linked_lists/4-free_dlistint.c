#include "lists.h"

/**
 *free_dlistint - a func that frees the linked list
 *@head: the head ptr of the linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *next;

	if (!head)
		return;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
