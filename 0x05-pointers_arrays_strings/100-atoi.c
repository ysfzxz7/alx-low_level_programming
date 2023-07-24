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
	int status = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			status *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * status);
}
