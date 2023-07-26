#include "main.h"
#include <string.h>

/**
 * is_lower - first func that check if a char is upper
 * @letter: letter needs to be checked
 * Return: 1 is lowercase otherwise 0
 */

int is_lower(int letter)
{
	if (letter >= 97 && letter <= 122)
		return (1);
	return (0);
}

/**
 * is_special - this func check if this char is spesial or not
 * @letter: character
 * Return: 1 if special character, 0 ohterwise
 */

int is_special(char l)
{
	if (l == ',' || l == ';'
		|| l == '.' || l == '!'
		|| l == '?' || l == '\"'
		|| l  == '(' || l == ')'
		|| l == '{' || l == '}'
		|| l == ' ' || l == '\t' || l == '\n'
	   )
	{
		return (1);
	}

	return (0);
}

/**
 * cap_string - capitalizes the words
 * @s: string included
 * Return: pointer of string 
 */

char *cap_string(char *s)
{
	char *a = s, current;
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		current = a[i];

		if (i > 0 && is_lower(current) && is_special(a[i - 1]))
			a[i] -= 32;
		else if (i == 0 && is_lower(current))
			a[i] -= 32;
	}

	return (s);
}
