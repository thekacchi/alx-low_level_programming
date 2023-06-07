#include <stdio.h>
#include <string.h>

/**
 *factorial - main entry point
 *@n: parameter to be operated
 *Return: always 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1)
		;
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
