#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that stringfy the args in strs
 * @ac: size of argument
 * @av: the array of strings
 * Return: ptr to the string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *string;

	if (ac == 0 || *av == NULL)
		return (NULL);
	/* init summation of all strings */
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;
	/* init the new string */
	string = malloc(len * sizeof(char) + 1);
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}
	/* start fillig the final string */
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			string[k++] = av[i][j];
		}
		string[k++] = '\n';
	}
	string[k] = '\0';

	return (string);
}
