#include <stdio.h>
#include "main.h"

/**
 *reverse_array - a func reverse a string
 *
 *@a: the array used
 *@n: the lenght of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
