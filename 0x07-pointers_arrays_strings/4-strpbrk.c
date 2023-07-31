#include "main.h"
#include <string.h>

/**
 *_strpbrk - function locates the first occurrence in the string
 *@s: the string used
 *@accept: the string looked for
 *Return: NULL if not found otherwise a pointer for the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	s++;
	}
	return (NULL);
}
