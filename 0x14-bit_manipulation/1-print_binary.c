#include "main.h"

/**
 * print_binary - print the binary code of a given nmbr.
 * @n: unsd number.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
