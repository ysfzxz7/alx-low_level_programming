#include "main.h"

/**
 *_isdigit - check if a given var is a digit
 *@c: var needs to be checked
 *
 *Return: (1)if c is digit else return (0)
 */

	int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
