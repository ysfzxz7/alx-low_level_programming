#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
