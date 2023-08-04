#include <stdio.h>

/**
 *main - print all command passed
 *@argc: commands counter
 *@argv: command arrat
 *Return: return (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%S\n", argv[i]);
	}
	return (0);
}
