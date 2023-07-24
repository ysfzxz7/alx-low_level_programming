#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *print_rev - the main func
 *
 *@s: the pointer of the string
 */

void print_rev(char *s)
{
	int len =  strlen(s) - 1;

	for (; len >= 0; len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}
