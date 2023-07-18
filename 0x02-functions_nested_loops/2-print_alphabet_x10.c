#include "main.h"
#include "1-alphabet.c"

/**
 *print_alphabet_x10 - func that aprint all alphabet in row
 *
 */

	void print_alphabet_x10(void){
		int i = 0;

		do {
			print_alphabet();
			i++;
		} while (i<10);
	}
