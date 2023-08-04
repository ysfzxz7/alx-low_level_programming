#include <stdio.h>
#include "main.h"

/**
 *_strncat - copy a number of char from other var
 *@dest: the dest
 *@src: the source of the vars
 *@n: the number of element
 *Return: return the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
