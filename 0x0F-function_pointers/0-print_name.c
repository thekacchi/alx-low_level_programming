#include <stdio.h>
#include "main.h"

/**
 * print_name -function prints nname
 * @name: func parameter
 * @f: func parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		if (f != NULL)
			f(name);
}
