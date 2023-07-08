#include "main.h"

/**
 * print_binary - converts decimal to binar
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int temp;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;

		if (temp & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
