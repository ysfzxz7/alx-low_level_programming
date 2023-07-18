#include "main.h"

/**
 * print_times_table - prints tables n times,
 *
 * @n: number of tables
 */

void print_times_table(int n)
{
	int i, k, sum;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (k = 0; k <= n; k++)
			{
				sum = (k * i);
				if (k != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (sum < 10 && k != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((sum % 10) + 48);
				}
				else if (sum >= 10 && sum < 100)
				{
					_putchar(' ');
					_putchar((sum / 10) + 48);
					_putchar((sum % 10) + 48);
				}
				else if (sum >= 100 && k != 0)
				{
					_putchar((sum / 100) + 48);
					_putchar((sum / 10) % 10 + 48);
					_putchar((sum % 10) + 48);
				}
				else
					_putchar((sum % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
