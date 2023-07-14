#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int l, r, m;

	for (l = 48; l < 58; l++)
	{
		for (m = l + 1; m < 58; m++)
		{
			for (r = m + 1; r < 58; r++)
			{
				putchar(l);
				putchar(m);
				putchar(r);
				if (l == 55 && m == 56 && r == 57)
				{
				putchar('\n');
				continue;
				}
				putchar(',');
				putchar(' ');
				}
		}
	}
return (0);
}
