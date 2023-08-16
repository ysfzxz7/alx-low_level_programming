#include <stdio.h>
#include <stdlib.h>

/**
 *main - the Entry  point
 *@argc: argument counter
 *@argv: the aray of variables
 *
 *Return: allways 0;
 */

int main(int argc, char **argv)
{
	int byte, i;
	int (*address)(int, char **) = main;
	unsigned char operator_code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
	operator_code = *(unsigned char *)address;
	printf("%.2x", operator_code);
	
	if (i == byte - 1)
	continue;
	printf(" ");
	address++;
	}
	printf("\n");
	return (0);

	}

