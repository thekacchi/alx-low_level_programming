#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - printa varianst
 * @format: string representing the type
 */

void print_all(const char * const format, ...)
{
	va_list all;
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;

	va_start(all, format);

	while (ptr && *ptr)
	{
			switch (*ptr)
			{
				case 'c':
					c = va_arg(all, int);
					printf("%c", c);
					break;
				case 'i':
					i = va_arg(all, int);
					printf("%d", i);
					break;
				case 'f':
					f = va_arg(all, double);
					printf("%f", f);
					break;
				case 's':
					s = va_arg(all, char *);
					if (s != NULL)
						printf("%s", s);
					else
						printf("(nil)");
					break;
				default:
					ptr++;
					continue;
			}
			if (*(ptr + 1))
				printf(", ");
			ptr++;
	}

	printf("\n");

	va_end(all);
}
