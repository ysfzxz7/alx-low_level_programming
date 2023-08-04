#include <stdio.h>
#include "main.h"

/**
 *_strncpy - is a func cpy a number of elem
 *
 *@dest: the dest
 *@src: the source
 *@n: the number of elem needs to be copied
 *Return: the pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
