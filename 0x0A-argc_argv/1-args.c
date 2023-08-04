#include <stdio.h>

/**
 *main - func that print the number of argument passed
 *@argc: the number of argument including program name
 *@argv:array of command passed
 *Return: 0 of success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
