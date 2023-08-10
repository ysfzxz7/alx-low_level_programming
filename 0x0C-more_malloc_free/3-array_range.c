#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *array_range - a func that creat an array of int
 *@min: the min (started value in the array)
 *@max : the max value int the array (end)
 *
 *Return: an int pointer to that array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, m;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0, m = min; m <= max; m++, i++)
	{
		array[i] = m;
	}
	return (array);
}
