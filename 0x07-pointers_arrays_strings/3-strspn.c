#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_found - a function check the occurrence of a char
 *@string: the looked at
 *@c: the char looked for
 *
 *Return: (1) if found otherwise (0) 
 */

int _found(char *string, char c)
{
	int i, lenght = strlen(string);

	while (i <= lenght)
	{
		if (string[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 *_srtspn - look for the occurrence of a char inside a whole
 *@s: the big string
 *@accept: the chars ignored
 *
 *Return: the first occurrence of non-given char
 */

unsigned int _strspn(char *s, char *accept)
{
	char *ptr = s;
	int k, i, counter, lenght = strlen(ptr);

	counter = 0;	
	for (i = 0; i < lenght; i++)
	{
		if(_found(accept, ptr[i]))
		{
			for (k = 0; k < lenght; k++)
			{
				if (_found(accept, ptr[k]))
				{
					counter ++;
				}
				else
				{
					break;
				}
				
			return (counter);
			}
		}
	}
	return (counter);
}
