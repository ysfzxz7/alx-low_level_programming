#include <stdio.h>
#include <stdlib.h>

/**
 *main - the entry point
 *@argc: command counter
 *@argv: array of command
 *Return: 1 if error otherwise 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{	printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1] * atoi(argv[2]);
	return (0);
}
