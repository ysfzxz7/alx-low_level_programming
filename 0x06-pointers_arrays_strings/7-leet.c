#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *is_letter -  is a function that encode a given letter and igonre
 *the other ones
 *
 *@let: the character needs to be checked
 *Return: return the encode of the letter otherwise the letter itself
 */

int is_letter(char let)
{
	int i;
	char upper[] = "AELOT";
	char lower[] = "aelot";
	char encoder[] = "43107";

	for (i = 0; i < 5; i++)
	{
		if (upper[i] == let || lower[i] == let)
		{
			return (encoder[i]);
		}
	}
	return (let);
}

/**
 *leet - function used the encodes letter
 *@s: it takes a string of characters
 *
 *Return: the encoded string
 */

char *leet(char *s)
{
	char *origin = s;
	int i, len = strlen(origin);

	for (i = 0; i < len; i++)
	{
		origin[i] = is_letter(origin[i]);
	}
	return (s);
}
