#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *rev_string - reverse a string
 *
 *@s:  the string ppointer
 */
void rev_string(char *s)
{
	int i = 0, j = streln(s) - 1;

	for (; i < j; i++)
	{
	int tmp = s[i];

	s[i] = s[j];
	s[j] = tmp;
	}

}
