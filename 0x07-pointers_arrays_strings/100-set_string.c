#include "main.h"
#include <stdio.h>

/**
 *set_string - redirect the head of a pointer
 *@s: the dest ptr
 *@to: the source
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
