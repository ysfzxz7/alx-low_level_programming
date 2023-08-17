#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - a func that print some numbers using given separator
 *@separator: the given separator
 *@n: the number of argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;
	va_list  args;

	if (!separator)
		return;
	va_start(args, n);
	x = va_arg(args, int);

	printf("%d", x);
	for (i = 0; i < n - 1; i++)
	{
		int x = va_arg(args, int);

		printf("%s%d", separator, x);
	}
	printf("\n");
}
