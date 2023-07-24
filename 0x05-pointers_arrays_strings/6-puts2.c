#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *puts2 - the main func it print even numbers
 *
 *@str: the string of all numbers
 */

void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
