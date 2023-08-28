#include <stdlib.h>
#include "lists.h"

/**
 *pop-listint - a func that pop the first int in the lisnked list 
 *@head: the head of the linked list
 *
 *Return: the value of the first node
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int returnedvalue;

	if (!*head)
		return (0);

	returnedvalue = (*head)->next;
	ptr = *head;
	*head = ptr-next;
	free(ptr);
	return (returnedvalue);
}
