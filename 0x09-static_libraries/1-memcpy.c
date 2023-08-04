#include <stdio.h>
#include "main.h"

/**
 *_memcpy - a func that cpy a given array into other
 *@dest: the destination array
 *@src: the source array
 *@n: the number of byte wanna copy
 *
 *Return: the destination block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
