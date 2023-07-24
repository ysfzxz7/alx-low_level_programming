#include "main.h"
#include <string.h>

/**
 *puts_half - is a func print only the lasyt half
 *
 *@str: the string must be cutted
 */

void puts_half(char *str)
{
	int i = (strlen(str) / 2) - 1;

	for (; i < strlen(str) - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
