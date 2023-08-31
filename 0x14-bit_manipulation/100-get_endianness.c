#include "main.h"
/**
 * get_endianness - check if the number is indian or not
 *
 * Return: 1 !littel otherwise 0
 */
int get_endianness(void)
{
	unsigned int tst = 1;
	char *endiann = (char *)&tst;

	if (*endiann)
	{
		return (1);
	}
	return (0);
}
