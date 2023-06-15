#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates arguments
 * @ac: function parameter
 * @av: function parameter
 * Return: Null nostly
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, a = 0, b = 0, c = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][b])
		{
			ch++;
			b++;
		}

		b = 0;
		a++;
	}

	x = malloc((sizeof(char) * ch) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			x[c] = av[a][b];
			c++;
			b++;
		}

		x[c] = '\n';

		b = 0;
		c++;
		a++;
	}

	c++;
	x[c] = '\0';
	return (x);
}
