#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node - a func that add to the end of the linkedl
 *@head: a pointer to a pointer to the head
 *@str: the string given
 *Return: a pointer the new node or NULL if string is null or malloc faild
 */
list_t *add_node(list_t **head, const char *str)
{
	char *strc;
	list_t *n_node;
	unsigned int lenght = 0;

	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);
	strc = strdup(str);
	if (!strc)
	{
		free(n_node);
		return (NULL);
	}
	while (*str)
	{
		lenght++;
		str++;
	}

	n_node->str = strc;
	n_node->len = lenght;
	n_node->next = *head;

	*head = n_node;
	return (n_node);
}
