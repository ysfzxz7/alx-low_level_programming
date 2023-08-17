#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_strings - print some string arguments
 *@separator: the separator of the string
 *@n: the number of the argument
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char s[] = "(nil)";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);
	
		if(!x)
			x = s;
		printf("%s", x);
		if ((n - 1) != i && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);


}
