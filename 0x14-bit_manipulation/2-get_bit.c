#include "main.h"

/**
 *get_bit - a func that get a bit in a given index
 *@n: the number wants to be checked
 *@index: the index nedded
 *Return: the bit in the index wanted otherwise return -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
