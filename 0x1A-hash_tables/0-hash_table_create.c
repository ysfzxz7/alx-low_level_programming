#include "hash_tables.h"

/**
 * hash_table_create - the func that create the table and r ptr to it
 * @size: the size of the array
 * Return: a ptr to thr table otherwise null
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	return (table);
}
