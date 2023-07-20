#include "main.h"

/**
 *print_diagonal - pprogram that draws a diagonal line on the terminal
 *@n: lenght of the diagonal
 *
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((i + 1) == n)
			_putchar('\\');
		else
			_putchar(' ');
	}
	_putchar('\n');

}
