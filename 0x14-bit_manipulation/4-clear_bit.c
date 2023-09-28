#include "main.h"

/**
 *  clear_bit - make a bin 0 at a given place
 * @n: ptr to the string number
 * @index: the idx
 * Return: 1 if value changed, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
