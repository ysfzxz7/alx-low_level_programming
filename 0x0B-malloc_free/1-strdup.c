#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a func that dub a  string
 * @str: the given string
 * Return: the pointer to the new string
 */

char *_strdup(char *str)
{
	char *ptr;
	int len, i = 0;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	ptr = malloc(len * sizeof(char) + 1);
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
