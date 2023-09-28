#include "main.h"

/**
 * get_bit - func that get a bin at a given place
 * @n: the givn nmbr
 * @index: the index of the number
 * Return: the specific bit if possible, -1 otherwise.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
