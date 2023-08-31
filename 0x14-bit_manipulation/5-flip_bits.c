#include "main.h"

/**
 *flip_bits - a func that flips a binary
 *@n: the number given
 *@m: the final number
 *Return: the counter
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int counter = 0;

	while (flipped)
	{
		if (flipped & 1)
			counter++;
		flipped >>= 1;
	}
	return (counter);
}
