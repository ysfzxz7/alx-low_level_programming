#include "lists.h"
/**
 *add_dnodeint_end - add to the end of the linked  list
 *@head: the head of the linked list
 *@n: the intger needs to be added
 *
 *Return: a ptr to the end of the last new node
 */
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
