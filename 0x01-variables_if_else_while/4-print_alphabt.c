#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int chaar;

	for (chaar = 97; chaar < 123; chaar++)
	{
	if (chaar == 101 || chaar == 113)
		continue;
	else
		putchar(chaar);
	}
	putchar('\n');
	return (0);
}
