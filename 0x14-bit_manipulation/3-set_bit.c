#include "main.h"

/**
*set_bit - make a binary in given index equal to one
*@n: number used
*@index: the index given
*
*Return: 1 if success otherwise -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}

