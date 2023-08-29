#include "lists.h"

/**
 * reverse_listint - a func that rev a linked list
 * @head: the head of the linked list
 *
 * Return: the adress of the first node in the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *be, *ah;

	if (!head || !*head)
		return (NULL);

	be = NULL;

	while ((*head)->next)
	{
		ah = (*head)->next;
		(*head)->next = be;
		be = *head;
		*head = ahead;
	}
	(*head)->next = behind;

	return (*head);
}
