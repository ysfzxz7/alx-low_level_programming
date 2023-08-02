#include "main.h"

/**
 * _pow_recursion - function that calcult the power of x of y
 * @x: the root number
 * @y: the power number
 * Return: -1 if y is negative, 1 if y is zero
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (_pow_recursion(x, y - 1) * x);
}
