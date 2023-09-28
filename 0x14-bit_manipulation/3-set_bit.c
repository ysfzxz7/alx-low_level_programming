#include "main.h"

/**
 * set_bit - . func that change a number in a given place
 * @n: ptr to the number
 * @index: the idx
 * Return: 1 if value changed, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned int) * 8) - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
