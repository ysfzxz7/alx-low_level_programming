#include "lists.h"

/**
 *add_dnodeint -  a func that add dlinked list to the start of the linked list
 *@head: the head of the linked list
 *@n: the intger needs to be added to the dlinked list
 *Return: a ptr the first node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	*head = n_node;

	return (*head);
}
