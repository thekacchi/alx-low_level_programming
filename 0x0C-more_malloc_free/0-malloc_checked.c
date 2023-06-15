#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - allocated memory
* @b: function parameter
* Return: Nothing
*/

void *malloc_checked(unsigned int b)
{
	void *g;

	g = malloc(b);

	if (g == NULL)
		exit(98);

	return (g);
}
