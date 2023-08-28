#include <stdlib.h>
#include "lists.h"
/**
 *sum_listint - a func that return the sum of a linked list
 *@head: the head of the linked list
 *Return: the geld collected
 *
 */
int sum_listint(listint_t *head)
{
	unsigned int geld = 0;
	listint_t *curr = head;

	while (curr)
	{
		geld += curr->n;
		curr = curr->next;
	}
	return (geld);
}
