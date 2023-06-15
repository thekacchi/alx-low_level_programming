#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - main entry point
 * @grid: operation parameter
 * @height: operation parameter
 * Return: Theres no return, void function here
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
