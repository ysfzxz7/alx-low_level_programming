#include <stdio.h>

/**
 *main - the Entry point
 *
 *Return: Always (0) if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 2)
		{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		}
		else
			printf("%d ", i);
		}
	printf("\n");

return (0);
}
