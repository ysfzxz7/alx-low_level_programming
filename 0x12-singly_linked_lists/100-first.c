#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 *hare - the first func to be printed
 *
 *
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
