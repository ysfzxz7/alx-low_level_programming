#include <stdio.h>
#include "main.h"

/**
 *_strcpy - the main func
 *
 *@dest: the des var
 *@src: the source ptr
 *
 *Return: a pointer to dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != NULL)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
