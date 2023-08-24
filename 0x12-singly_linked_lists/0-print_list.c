#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_list - a func that print a linkedlist
 *@h: the head of the linked list
 *Return: the lenght of the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		i++;
		if (!curr->str)
		{
			printf("[0] (nil)\n");
			curr = curr->next;
			continue;
		}
		printf("[%d] %s\n", curr->len, curr->str);
		curr = curr->next;
	}
	return (i);
}
