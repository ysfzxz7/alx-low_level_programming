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
	int i = 0, len = strlen(str) - 1;

	for ( ; i < len; i++)
	{
		if (str[i] % 2 == 0)
			putchar(str[i]);

	}
	putchar('\n');
}
