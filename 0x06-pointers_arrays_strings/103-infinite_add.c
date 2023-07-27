#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev - this function is used to reverse a string
 * @string: string needs to be edited
 * Return: return the string
 */
char *rev(char *string)
{
	int i = 0, l = strlen(string) - 1;
	int tmp;

	for ( ; i < l; i++, j--)
	{
		tmp = string[l];
		string[l] = string[i];
		string[i] = tmp;
	}

	return (string);
}

/**
 * infinite_add -this func adds to loooong numbers
 * @s1: first number
 * @s2: second number
 * @r: string buffer
 * @size_r: the length of the string of numbers
 * Return: string pointer
 */
char *infinite_add(char *s1, char *s2, char *r, int size_r)
{
int i = strlen(s1) - 1, j = strlen(s2) - 1;
int rest = 0, tall = i > j ? i : j;
int na, nz, count = 0;
char *one = s1, *two = s2, *result = r;

for ( ; tall >= 0; tall--, i--, j--)
{
	if (i >= 0 && j >= 0)
	{
		na = (one[i] - 48);
		nz = (two[j] - 48);
		*result++ = ((na + nz + rest) % 10) + '0';
		rest = (na + nz + rest) / 10;
	}
	else
	{
	if (i < 0)
	{
		nz = (two[j] - 48);
		*result++ = ((nz + rest) % 10) + '0';
		rest = (nz + rest) / 10;
	}
	else
	{
		na = (one[i] - 48);
		rest = (na + rest) / 10;
		*result++ = ((na + rest) % 10) + '0';
	}
	}
	if (tall == 0 && rest > 0)
		*result++ = rest + '0';
	if (++count + 1 >= size_r)
		return (0);
}
*result++ = '\0';
rev(r);
return (r);
}
