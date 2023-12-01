#include "hash_tables.h"

/**
 * key_index - fnc that creat isx from the key
 * @key: ptr to the key
 * @size: the size of array
 * Return: the idx
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, dj;

	dj = hash_djb2(key);
	index = dj % size;

	return (index);
}
