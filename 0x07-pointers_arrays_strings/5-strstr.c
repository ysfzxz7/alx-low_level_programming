#include "main.h"
#include <string.h>

/**
 *_strstr - look for a substring inside a string
 *@haystack: the global string
 *@needle: the substring looking for
 *Return: Null !found otherwise a pointer to the start
 */

char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (k = 0; needle[k] != '\0'; k++)
	{
		if (haystack[i + k] != needle[k])
			break;
	}
		if (!needle[k])
			return (&haystack[i]);
	}
	return (NULL);
}
