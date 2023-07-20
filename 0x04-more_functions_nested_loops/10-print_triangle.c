#include "main.h"

/**
 *print_triangle - print triangle of #
 *
 *@size: is the number of lines in the code
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j + i >= size - 1)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
