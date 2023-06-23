#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: counter
 * Return: always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list names;

	va_start(names, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%s", va_arg(names, char *));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
	va_end(names);
}
