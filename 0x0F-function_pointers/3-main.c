#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - the entry point
 *@argc:  unsed
 *@argv: an array of argument
 *Return: 0 if success
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	int n1, n2;
	char *op__ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op__ptr = argv[2];

	if (!get_op_func(op__ptr) || op__ptr[1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op__ptr == '/' && n2 == 0) || (*op__ptr == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op__ptr)(n1, n2));
	return (0);
}
