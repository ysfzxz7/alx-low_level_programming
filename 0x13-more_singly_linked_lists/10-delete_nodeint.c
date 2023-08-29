#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete some nodes in the linked list
 * @head: the head of the linked list
 * @index: the index of the node want to be deleted
 *
 * Return: a ptr to the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			old_node = *head;
			if (i == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			previous_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((i + 1) == index)
			previous_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
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
