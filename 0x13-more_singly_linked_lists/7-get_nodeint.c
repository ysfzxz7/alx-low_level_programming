#include <stdlib.h>
#include "lists.h"
/**
 *get_nodeint_at_index - a func that return the n at aspeciefic index
 *@head: the head of the liked list
 *@index: the index wanted
 *Return: the int value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *curr = head;

	if (!head)
		return (NULL);

	while (curr && i++ < index)
		curr = curr->next;
	return (curr);
}
