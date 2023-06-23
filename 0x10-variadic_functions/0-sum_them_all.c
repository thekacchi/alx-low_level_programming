#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function adds parameters
 * @n: function parameter
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	else
	{
		va_list task;

		va_start(task, n);
		sum = 0;
		for (i = 0 ; i < n ; i++)
		{
		sum += va_arg(task, int);
		}

		va_end(task);
		return (sum);
	}
}
