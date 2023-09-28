#include "main.h"

/**
 * power - func that calc the power of a number
 * @nbr: the nbr
 * @p: pwr
 * Return: the nbr need to be calculated
 */
int power(int nbr, int p)
{
	int i, rst = nbr;

	if (nbr == 0)
		return (0);
	if (nbr > 0 && p == 0)
		return (1);
	for (i = 0; i < p - 1; i++)
		rst *= nbr;
	return (rst);
}

/**
 * check_bin - func that chek a bin code
 * @b: ptr to a string number
 * Return: 1 or 0
 */
int check_bin(const char *b)
{
	int i, lenght;

	if (!b)
		return (0);
	lenght = strlen(b);
	for (i = 0; i < lenght; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	return (1);
}

/**
 * binary_to_uint -  func that get the unit number
 * @b: ptr to a string *b
 * Return: unsigned intger number
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, exp, n;
	unsigned int number = 0;

	if (!check_bin(b))
		return (0);
	len = strlen(b);
	exp = len - 1;
	for (i = 0; i < len; i++, exp--)
	{
		n = b[i] - '0';
		n *= power(2, exp);
		number += (unsigned int) n;
	}
	return (number);
}
