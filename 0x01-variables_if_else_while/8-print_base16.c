#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success);
 */

int main(void)
{
	int chaar;

	for (chaar = 48; chaar < 58; chaar++)
		putchar(chaar);
	for (chaar = 97; chaar < 103; chaar++)
		putchar(chaar);
	putchar('\n');
return (0);
}
