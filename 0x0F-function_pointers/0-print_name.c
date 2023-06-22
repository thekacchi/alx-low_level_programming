#include <stdio.h>
#include "main.h"

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		if (f != NULL)
			f(name);
}
