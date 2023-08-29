#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - a func that insert a node ina given index
 *@head: the head of the node
 *@idx: the index of the node
 *@n: the numner inside the node
 *Return: the address to the new node otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *ptr = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!new)
		return (NULL);
	new->n = n;

	if (!*head)
	{
		(*head)->next = new;
		new->next = NULL;
	}
	while (ptr && i++ < idx)
		ptr = ptr->next;
	tmp = ptr->next;
	ptr->next = new;
	new->next = tmp;
	return (new);
}
