#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*putchar fun*/
int _putchar(char c);

/*print the list fun*/
size_t print_list(const list_t *h);

/*print the lenght of the list*/
size_t list_len(const list_t *h);

/**/
/*add to the linked list*/
list_t *add_node(list_t **head, const char *str);

/*add to the end*/
list_t *add_node_end(list_t **head, const char *str);

/*free a list*/
void free_list(list_t *head);

/*advanced*/
#endif
