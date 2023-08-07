#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a func that dublicat a str
 * @str: the given string
 * Return: the pointer returned
 */

char *_strdup(char *str)
{
	int i, len = strlen(str);
	char *ptr;

	i = 0;
	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
