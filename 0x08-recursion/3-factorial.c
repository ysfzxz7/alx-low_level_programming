#include "main.h"

/**
 * factorial - function calcult a factorial of a number
 * @n: number
 * Return: (-1) if given number is negative, 1 if 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
