#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a func that insert a node i given place
 * @head:the head of the linked list
 * @idx: the place given of the node
 * @n: the int insode the linked list
 *
 * Return: a ptr to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new || idx > listint_len(*head))
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	while (head)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new->next = *head;
				*head = new;
				return (new);
			}
			new->next = prev->next;
			prev->next = new;
			return (new);
		}
		else if ((i + 1) == idx)
			prev = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

/**
 * listint_len - &aid func to get the lenght of the func
 * @head: thez head of the func
 *
 * Return: the the lenght of the linked list
 */
size_t listint_len(const listint_t *head)
{
	const listint_t *curr = head;
	size_t counter = 0;

	while (curr != NULL)
	{
		counter += 1;
		curr = curr->next;
	}
	return (counter);
}
