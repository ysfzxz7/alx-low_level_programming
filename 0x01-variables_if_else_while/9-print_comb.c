#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 48; digit < 57; digit++)
	{
	putchar(digit);
	putchar(',');
	putchar(' ');
	}
	putchar('9');
return (0);
}
