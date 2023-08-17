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
	unsigned int i;
	va_list  args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (separator != NULL && (n - 1) != i)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
