#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *check_digits - a func that check if a char isn't digit
 *@str: the string given
 *Return: 0 if not digit and 1 if digit
 */
int check_digits(char *str)
{
	int i,len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] < '0' || str [i] > '0')
			return (0);
	}
	return (1);
}
/**
 *
 *
 *
 *
 *
 */


/**
 *main - the entry point
 *@argc: the number of argument
 *@argv: the array of argument
 *Return: 0 success
 */

int main(int argc, int *argv[])
{
	char *rslt;

	if (argc != 3 || !(check_digits(argv[1]) && check_digit(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}
	else
		rslt = mul(argv[1], argv[2]);
	printf("%s\n", rslt);
	return (0);
}
