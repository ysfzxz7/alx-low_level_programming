#include <stdio.h>

/**
 * main - Entry point to putchar alphapet
 *
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	int chaar;

	for (chaar = 97; chaar < 123; chaar++)
		putchar(chaar);
	for (chaar = 65; chaar < 91; chaar++)
		putchar(chaar);
	putchar('\n');
return (0);
}
