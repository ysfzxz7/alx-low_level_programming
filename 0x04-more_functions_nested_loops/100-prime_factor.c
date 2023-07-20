#include <stdio.h>

/**
 *
 *main - entry point for this function
 *
 *return: 0;
 *
 */

int main(void)
{
	unsigned long number = 612852475143 , factor;

	for (factor = 2; factor < number; )
	{
		if (number % factor == 0)
		{
			number /= factor;
		}
		factor++;
	}
	printf("%lu\n", number);
	return (0);
}
