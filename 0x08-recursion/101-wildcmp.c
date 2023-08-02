#include "main.h"

/**
 * wildcmp - compare two strings using recursion
 * @s1: first str
 * @s2: second str
 * Return: 1 if the same otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s1 == *s2)
		return (
			*s2 != '\0' &&
			wildcmp(s1 + 1, s2 + 1)
		);

	if (*s2 == '*')
		return (
			wildcmp(s1, s2 + 1) ||
			(*s1 != '\0' && wildcmp(s1 + 1, s2))
		);

	return (0);
}
