#include "main.h"

/**
 *_atoi - convert a digit into a number
 *
 *@s: is the pointer of the string
 *
 *Return: the result
 */


int _atoi(char *s)
{
	int rt;
	int sign;
	unsigned int result;

	sign = 1;
	result = 0;
	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' || *s <= '9')
			result = result * 10 + (*s - '0');
		else if (result > 0)
			break;
	} while (*s++);
	rt = result * sign;
	return (rt);
}
