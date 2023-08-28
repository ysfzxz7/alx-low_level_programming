#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - a func that add a node in the begging of the linked list
 *@n: the number needs to be added to the linked list
 *@head: the pointer head of the linked list
 * Return: a ptr to the new linked list or a NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (*head);
}
