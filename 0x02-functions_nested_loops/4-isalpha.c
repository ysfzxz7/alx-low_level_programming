#include "main.h"
#include <ctype.h>

/**
 *_isalpha - checks if a var is a char (Lower or upper)
 *
 *@c: char needs to be checked
 *
 *Return: (1) if true and (0) if false
 */

	int _isalpha(int c)
	{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return (1);
		else
			return (0);
	}
