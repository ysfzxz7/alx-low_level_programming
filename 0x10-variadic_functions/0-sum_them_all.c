#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - func the add all args in a variadic func
 *@n: the counter of the variadic func
 *
 *Return: the sum of the args
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;

	va_list args;
	va_start(args, n);

	for (i = 0; i < (int) n; i++)
	{
		int x = va_arg(args, int);
		sum = sum + x;
	}
	va_end(args);
	return (sum);
}
