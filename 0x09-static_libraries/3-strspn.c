#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strspn - look for the occurrence of a char inside a whole
 *@s: the big string
 *@accept: the chars ignored
 *
 *Return: the first occurrence of non-given char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, flag;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (k);
		}
	}
	return (0);
}
