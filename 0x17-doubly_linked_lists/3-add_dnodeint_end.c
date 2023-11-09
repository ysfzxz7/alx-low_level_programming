#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *curr;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t *));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = n_node;
		return (*head);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;

	curr->next = n_node;
	n_node->prev = curr;

	return (n_node);

}
