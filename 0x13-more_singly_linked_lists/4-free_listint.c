#include <stdlib.h>
#include "lists.h"

/**
 *free_listint - a func that frees all the linked list
 *@head: the head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
