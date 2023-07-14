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
	if (chaar == 145 || chaar == 160)
		continue;
	else
		putchar(chaar);
	}
	putchar('\n');
	return (0);
}
