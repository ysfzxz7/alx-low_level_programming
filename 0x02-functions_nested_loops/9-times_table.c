 #include "main.h"

/**
 *times_table - print all timr table
 *
 *@created by youssefjr
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int sum = (i * j);

			if (j > 0)
			{
				_putchar(' ');
				if (sum < 10)
					_putchar(' ');
				else
					_putchar((sum / 10) + 48);
					_putchar((sum % 10) + 48);
			}
			else
				_putchar('0');

			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}

}

