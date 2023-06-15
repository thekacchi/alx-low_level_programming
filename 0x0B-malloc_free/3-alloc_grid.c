#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - main entry point
 * @width: parameter of operation
 * @height: operation parameter
 * Return: Returns null
 */

int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		x[a] = malloc(sizeof(int) * width);

		if (x[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(x[b]);
			}

			free(x);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			x[c][d] = 0;
		}
	}

	return (x);
}

