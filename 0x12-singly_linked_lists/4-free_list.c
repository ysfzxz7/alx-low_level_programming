#include "lists.h"
#include <stdlib.h>

/**
 *free_list - free a linked list
 *@head: the head of the linked list
 *
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;

	}
}
