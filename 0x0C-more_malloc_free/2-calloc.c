#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: function parameter
 * @size: function parameter
 * Return: pointer to  allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	p = malloc(j);

	if (p == NULL)
		return (NULL);

	while (i < j)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}

