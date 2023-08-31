#include "main.h"
int bin_checker(const char *str);

/**
 *binary_to_uint - a func that convert an int into binary
 *@b: the string contaning the number
 *Return: un unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int lenght = 0, bs = 1;

	if (!bin_checker(b))
		return (0);

	while (b[lenght])
	{
		lenght++;
	}

	while (lenght)
	{
		dec += ((b[lenght - 1] - '0') * bs);
		bs *= 2;
		lenght--;
	}
	return (dec);

}

/**
 *bin_checker - a func that cheker the string is valid
 *@str: the string given
 *Return: 1 is valid 0 if n valid
 *
 */
int bin_checker(const char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str != '1' && *str != '0')
			return (0);
		str++;
	}
	return (1);
}
