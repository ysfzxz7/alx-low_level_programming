#include "main.h"
#include <string.h>

/**
 *puts_half - is a func print only the lasyt half
 *
 *@str: the string must be cutted
 */

void puts_half(char *str)
{
	int len = strlen(str);

	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len / 2) + 1;
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
