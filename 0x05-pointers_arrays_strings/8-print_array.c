#include <stdio.h>
#include "main.h"

/**
 *print_array - the main func;
 *@a: the pointer of the array
 *@n: is the umber of element
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
