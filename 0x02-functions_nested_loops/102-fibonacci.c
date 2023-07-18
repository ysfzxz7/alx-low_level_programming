#include <stdio.h>

/**
 *main - a func that print 50 fibo number
 *
 *Return: Always (0);
 */

int main(void)
{
	unsigned long int ptr, i, j, sum;

	i = 0;
	j = 1;
	for (ptr = 0; ptr < 50; ptr++)
	{
	sum = i + j;
	i = j;
	j = sum;
	printf("%lu", sum);
	if (ptr >= 4)
	{
		printf("\n");
	}
	else
	{
	printf(", ");
	}
	}
	return (0);
}
