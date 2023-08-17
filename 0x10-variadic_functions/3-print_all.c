#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *_strpr - print string type
 *
 *@arg: the given strig
 */
void _strpr(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (!arg)
	{
		printf("(nil)");
		return;
	}
	printf("%s",str);
}

/**
 *_intpr - int printer
 *@arg: the given int
 */
void _intpr(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 *_charpr - char printer
 *@arg: the given char
 */
void _charpr(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 *_floatpr - float printer
 *@arg: the float given
 */
void _floatpr(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 *print_all - print a mixed arguments
 *@format: the palceholder
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *separ = "";

	printer_t funcs[] = {
		{"c", _charpr},
		{"s", _strpr},
		{"f", _floatpr},
		{"i", _intpr},
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].sym)))
		j++;

		if (j < 4)
		{
			printf("%s", separ);
			funcs[j].print(args);
			separ = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
