#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function adds
 * @a: paramete
 * @b: parameter
 * Return: always 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - func sub
 * @a: para
 * @b: oara
 * Return: always 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: para
 * @b: para
 * Return: alwayz 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: para
 * @b: para
 * Return: always 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo
 * @a: para
 * @b: para
 * Return: always 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
