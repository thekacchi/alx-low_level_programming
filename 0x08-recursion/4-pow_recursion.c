#include <stdio.h>

/**
 * _pow_recursion - main entry point
 * @x: parameter to be operated
 * @y: parameter to he operated
 * Return: not always 0
 */

int _pow_recursion(int x, int y)
{
	int half, full;

	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else if (y % 2 == 0)
	{
		half = _pow_recursion(x, (y / 2));
		return (half * half);
	}

	else
	{
		full = x * (_pow_recursion(x, (y - 1)));
		return (full);
	}
}
