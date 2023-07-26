#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strenco - func that rotate the letter
 *@x: the letter needs to be rotated
 *
 *Return: the encoded letter otherwise return the character
 */

char _strenco(char x)
{
	int i;
	char base[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotated[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; i < 52; i++)
	{
		if ((base[i]) == x)
		{
			return (rotated[i]);
		}
	}
	return (x);
}
/**
 *rot13 - a func rotate the letter 13 deg
 *@s: the string used to decoode
 *
 *Return: a pointer to the string
 */

char *rot13(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		s[i] = _strenco(s[i]);
	}
	return (s);
}
