#include <stdio.h>

/**
 *main - entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int l, r;

	for (l = 48; l < 58; l++)
	{
		for (r = l + 1; r < 58; r++)
		{
		if (r == l)
			continue;
		putchar(l);
		putchar(r);
		if (l == 56 && r == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
return (0);
}
