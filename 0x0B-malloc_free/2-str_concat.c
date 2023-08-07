#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - a func that concatinate two strings
 * @s1: first str
 * @s2: sec string
 * Return: new string pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len_1, len_2, i = 0;

	if (s1 == NULL)
		len_1 = 0;
	else
		len_1 = strlen(s1);
	if (s2 == NULL)
		len_2 = 0;
	else
		len_2 = strlen(s2);

	str = malloc((len_1 + len_2) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	while (i < len_1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len_2)
	{
		str[len_1 + i] = s2[i];
		i++;
	}
	str[len_1 + i] = '\0';

	return (str);
}
