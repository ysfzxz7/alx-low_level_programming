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
	int i = min;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(array) * max);
	if (array == NULL)
		return (NULL);
	for (; i <= max; i++)
	{
		array[i] = i;
	}
	return (array);
}
