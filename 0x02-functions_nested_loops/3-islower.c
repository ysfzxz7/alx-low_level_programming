#include "main.h"
#include <ctype.h>

/**
 *_islower - this func check if a char is lower
 *
 *@c: the char needs to be chechked
 *
 *Return: (1) if true an (0) if flase
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
