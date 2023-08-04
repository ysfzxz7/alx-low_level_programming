#include "main.h"
#include <stdio.h>

/**
 *_strcat - add  a string from a var to another
 *
 *@dest: destination
 *@src: the source
 *
 *Return: return the dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

return (dest);
}
