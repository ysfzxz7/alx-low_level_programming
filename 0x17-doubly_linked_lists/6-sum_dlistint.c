#include "lists.h"

/**
 *sum_dlistint - a func that return the sum of the a doubly linked list
 *@head: the head of the dlinked list
 *Return: the sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
