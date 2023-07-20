#include "main.h"

/**
 *print_diagonal - pprogram that draws a diagonal line on the terminal
 *@n: lenght of the diagonal
 *
 */

void print_diagonal(int n)
{
	int i,j;
	
	if(n <= 0)
	       _putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
