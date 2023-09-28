#include "main.h"

/**
 * flip_bits - flip some bits in agiven number
 * @n: first number
 * @m: second nulber
 * Return: number bits would need to flip from one to two.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	int count = 0;

	while (result)
	{
		if (result & 1)
			count++;
		result >>= 1;
	}
	return (count);
}
