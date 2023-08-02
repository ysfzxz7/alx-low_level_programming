#include "main.h"

/**
 * find_rt - a func that find the root
 * @x: the first nbr
 * @g: gus nbr
 * Return: return the root nbr
 */

int find_rt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (find_rt(x, y + 1));

	return (-1);
}

/**
 * _sqrt_recursion - the main funcc
 * @n: gvn nbr
 * Return: -1 if the nbr doesn't have the natural nbr
 */

int _sqrt_recursion(int n)
{
	int x = 2;

	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	return (find_rt(n, x));
}
