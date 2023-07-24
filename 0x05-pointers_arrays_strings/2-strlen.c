#include <stdio.h>
#include "main.h"

/**
 *_strlen - is a func count the number of element in an string
 *
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while(s+i != NULL)
	{
	i++;
	}
	return(i);
}
