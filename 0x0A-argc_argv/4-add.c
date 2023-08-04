#include <stdio.h>
#include <stdlib.h>

/**
 *main - the entry point of func that add all arg
 *@argc: the counter of commands
 *@argv: the arry of command
 *Return: 0 if no argu passed, 1 if command is not digit
 */

int main(int argc, char *argv[])
{
	int i, j, total;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total = total + (atoi(argv[i]));
	}
	printf("%d\n", total);
	return (0);
}
