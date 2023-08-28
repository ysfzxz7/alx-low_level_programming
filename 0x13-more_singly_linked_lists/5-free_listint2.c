#include "lists.h"
#include <stdio.h>

/**
 *free_listint2 - a func that frees all the int inside a linked list
 *@head: the head of the linked list
 *Return: nien
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;

	}
	head = NULL;
}
