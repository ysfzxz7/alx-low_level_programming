#include "main.h"
#include <stdio.h>

/**
 *_strchr - is funct used to find a given str inside a big string
 *@s: a pointer to the big string
 *@c: the string looking for
 *
 *Retrun: (NULL) if not found otherwise return a pointer
 *
 */

char *_strchr(char *s, char c)
{
	char *new = s;
	unsigned int i = 0, len = strlen(s);

	while (i <= len)
	{
		if (*new == c)
		{
			return (new);
		}
		new = &s[++i];
	}
	return (NULL);

}
