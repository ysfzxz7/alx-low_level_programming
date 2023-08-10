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
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * max);
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; min++)
	{
		array[i] = i;
		i++;
	}
	return (array);
}
