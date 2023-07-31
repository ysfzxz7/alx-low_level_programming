#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - sums a 2D array of numbers in diagonal mode
 *@a: the 2D array used
 *@size: the lenght of the 2D array
 *
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, j;

	sum1 = 0;
	sum2 = 0;
	for (j = 0; j < size; j++)
	{
	sum1 += *(a + (size * j) + j);
	sum2 += *(a + (size * j) + (size - j - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
