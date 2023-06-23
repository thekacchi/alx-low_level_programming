#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: function parameter
 * @n: counter
 * Return: numvers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list track;

	va_start(track, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(track, signed int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(track);

	printf("\n");

}
