#include "main.h"

/**
 * print_number - func used to print numbers
 * @n: the var of number needs to printed
 *
 */

void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		number = -n;
		_putchar('-');
	}
	else
		number = n;

	if (number / 10)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
