#include <stdio.h>
#include "3-calc.h"
/**
 *op_add - calc the sum of a + b
 *@a:the num1
 *@b:the num2
 *Return: the int result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - calc the sub of a - b
 *@a: the num1
 *@b: the num2
 *Return: the sub result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - calc the mul of a - b
 *@a: the num1
 *@b: the num2
 *Return: the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - calc the div of a - b
 *@a: the num1
 *@b: the num2
 *Return: the result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - calc the mod of a - b
 *@a: the num1
 *@b: the num2
 *Return: the result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
