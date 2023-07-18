#include "main.h"
/**
 *jack_bauer - print all 24hour second
 *
 */

void jack_bauer(void)
{
	int i, k;

	for (i = 0; i < 24; i++)
	{
		for (k = 0; k < 60; k++)
		{
		_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
		_putchar(':');
		_putchar((k / 10) + 48);
		_putchar((k % 10) + 48);
		_putchar('\n');
		}
	}
}
