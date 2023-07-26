#include <stdio.h>
#include "main.h"

/**
 *string_toupper - upper all lower
 *@s: the number of char in the string
 *
 *Return: return the new string
 */

char *string_toupper(char *s)
{
	char *x = s;

	while (*x)
	{
		if (*x >= 97 && *x <= 122)
		{
			*x = *x - 32;
		}
		x++;
	}
	return (s);
}
