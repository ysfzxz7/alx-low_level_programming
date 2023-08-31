#include "main.h"

/**
*clear_bit - set a bit in an index to 0
*@n: the number used
*@index: the index of the bit
*
*Return: 1 if succ or -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
