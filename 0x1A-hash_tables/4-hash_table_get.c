#include "hash_tables.h"

/**
 * hash_table_get - func the getter from the hash table
 * @ht: the ptr to the hash table
 * @key: ptr to the key
 * Return: value  otherwise NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	head = ht->array[index];
	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (head->key && strcmp(key, head->key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
