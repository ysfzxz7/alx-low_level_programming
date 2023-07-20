#include "main.h"

/**
 *_isupper - is a print check if a char is upper or lower
 *@c: character needs to be checked
 *Return:(1) if a letter is upper and (0) a letter is lower
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
