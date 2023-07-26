#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strcmp - func comapre two strings
 *
 *@s1: the string number 1
 *@s2: the string number 2
 *Return: return the def btw the two
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
