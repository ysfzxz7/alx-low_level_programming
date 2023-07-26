#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_number - a function that print a number
 *@n: the number need to be checked
 *
 *
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + 48);
}
