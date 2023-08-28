#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 *print_listint - a func that retrun the lenght of a linked list
 *@h: the head of the linked list
 *Return: the counter is the lenght of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *curr = h;

	while (curr)
	{
		printf("%d\n", curr->n);
		counter++;
		curr = curr->next;
	}
	return (counter);
}
