#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - add a node to the end of the list
 *@head: the head of the linked list
 *@n: the number addend
 *Return: the ptr to the new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr = *head;
	listint_t *new = malloc(sizeof(head));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
	} else
	{
	while (curr->next)
	{
		curr = curr->next;
	}

	curr->next = new;
	}
	return (new);
}
