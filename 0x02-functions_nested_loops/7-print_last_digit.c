#include "main.h"

/**
 *print_last_digit - gives the last number in a n
 *
 *@n: var used
 *
 *Return: the last digit or the n if it is less than 10;
 */
	int print_last_digit(int n)
	{
		if (n >= 0)
		{
		n = n % 10;
		_putchar('0' + n);
		}
		else
		{
		n %= 10;
		n *= -1;
		_putchar('0' + n);
		}
		return (n);
	}
