#include "main.h"
#include <string.h>

/**
 * palindrome_checker - chhchk if a string is plaindrome
 * @s: first stirng
 * @i: end number
 * @j: last number
 * Return: 1 if palindrome, 0 otherwise.
 */

int palindrome_checker(char *s, int i, int j)
{
	if (s[i] == '\0')
		return (1);
	else if (s[i] != s[j])
		return (0);
	return (palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - funcc check if str has  palindrome
 * @s: string used
 * Return: 1 if in plaindrom.
 */

int is_palindrome(char *s)
{
	int i = 0, j = strlen(s) - 1;

	if (*s == '\0')
		return (1);
	return (palindrome_checker(s, i, j));
}
