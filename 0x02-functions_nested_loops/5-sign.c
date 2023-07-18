#include "main.h"

/**
 *print_sign - checj if n is geater than 0 or equal t 0 or less than.
 *
 *@n: number needs to be checked.
 *
 *Return: (1) if great than 0 (0) is equal to zero (-1) if less than -1.
 */

int print_sign(int n)
{
	if (n >= 1)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
