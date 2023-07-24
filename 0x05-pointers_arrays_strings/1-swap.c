#include <stdio.h>
#include "main.h"

/**
 *swap_int - func that swap two int
 *
 *@a: var 1
 *@b: var 2
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
