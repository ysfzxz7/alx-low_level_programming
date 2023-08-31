#include "main.h"

/**
 *print_binary - a func that print the binary numbers
 *@n: the number given
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
