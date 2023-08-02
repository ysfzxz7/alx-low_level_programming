#include "main.h"

/**
 * is_prime_nbr - func used to find the prim number
 * @x: first nbr
 * @y: what is the nbr
 * Return: 1 if number is prime otherwide 0
 */

int is_prime_nbr(int x, int y)
{
	if (x % y == 0 && y != 1)
		return (0);
	else if (y == 1)
		return (1);
	return (is_prime_nbr(x, y - 1));
}
/**
*is_prime_number - check if a number is prime or not
*@n: number needs to check
*
*Return: true if number if prime
*/
int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime_nbr(n, i));
}

