#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - a func that add to the end of the list
 *@head: the head of the lsit
 *@str: the string needs to be added
 *Return: a ptr the new node;
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr = *head;
	unsigned int lenght = 0;
	char *strc;
	list_t *n_node;

	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);
	strc = strdup(str);

	if (strc == NULL)
	{
		free(n_node);
		return (NULL);
	}
	while (*str)
	{
		lenght++;
		str++;
	}

	n_node->len = lenght;
	n_node->str = strc;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = n_node;
	}

	return (*head);
}
