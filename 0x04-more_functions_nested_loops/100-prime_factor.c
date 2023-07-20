#include <stdio.h>

/**
 * main - the main func 
 *
 * Return:  (0) (Success)
 */

int main(void)
{
	unsigned long number = 612852475143, i;

	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
			number /= i;
	}

	printf("%lu\n", number);

	return (0);
}
