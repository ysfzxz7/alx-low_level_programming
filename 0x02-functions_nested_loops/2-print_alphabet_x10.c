#include "main.h"
#include "1-alphabet.c"
/**
 *print_alphabet_x10 - print the alph char *10.
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	do {
		print_alphabet();
		i++;
	} while (i >= 10);

}
