#include "main.h"

/**
 * _sqrt - calculat the square root of numberr
 * @y: tested number 
 * @i: square number
 *
 * Return: the square root of n
 */

int _sqrt_calculator(int i, int y)
{
	if (y > i / 2)
		return (-1);
	else if (y * y == i)
		return (y);
	return (_sqrt_calculator(y + 1, i));
}

/**
* _sqrt_recursion - gives the natrual number
* @n: number used
*
* Return: n is the sauqre root 
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_calculator(0, n));
}

