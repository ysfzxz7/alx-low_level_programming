#include "main.h"
#include <stdio.h>

/**
 *_memset - a func that fill a given array with constant byte
 *@s: the pointer of the given array
 *@b: the bytes
 *@n: the number of blockes
 *
 *Return: the new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
