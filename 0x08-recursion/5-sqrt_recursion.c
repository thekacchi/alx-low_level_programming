#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - main entry point
 * @n: operation parameter
 * @x: operation parameter
 * Return: the square root
 */

int _sqrt(int n, int x);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - main entry point
 *@n: number to find the square root of
 *@x: parameter to be iterated
 *Return: the square root
 */

int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (-1);

	return (_sqrt(n, x + 1));
}
