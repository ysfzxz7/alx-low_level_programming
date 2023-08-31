#include "main.h"

/**
 *clear_bit - a func that make a bit a 0;
 *@n: a ptr to the number
 *@index: the index of the number
 *Return: 1 if the target is hited of 0 if mission failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
