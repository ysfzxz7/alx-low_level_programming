#include <stdio.h>

/**
 * main - is the print all the even number in fibo
 *
 *Return: always (0)
 */

int main(void)
{
	unsigned long int i, j, sum, subsum, ptr, max;

	max = 4000000;
	subsum = 0;
	i = 0;
	j = 1;

	for (ptr = 0; ptr < 50; ptr++)
	{
		sum = j + i;
		i = j;
		j = sum;
		if (sum % 2 == 0 && sum < max)
		{
			subsum = sum + subsum;
		}
	}
	printf("%lu\n", subsum);
return (0);
}
