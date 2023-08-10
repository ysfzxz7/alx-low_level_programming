#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - a function that concatenates two strings.
 *
 *@s1: the destination pointer
 *@s2: the source pointer
 *@n: the number of bytes needs to concats
 *Return: pointer to s1;
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len = strlen(s1), s2len = strlen(s2);
	char *des = realloc(NULL, len + n + 1);

	if (des == NULL)
	{
		return (NULL);
	}
	if (n > s2len)
		n = s2len;
	while (i < len)
	{
		des[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		des[i] = s2[j];
		i++;
		j++;
	}
	des[i] = '\0';
	return (des);
}
