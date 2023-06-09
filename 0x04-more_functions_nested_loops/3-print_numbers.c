#include <stdio.h>
#include "main.h"

void print_numbers(void)
{
	int a;
	
	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
		_putchar('\n');
	}
}
