#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * array_range - main entry point
 * @min: parameter
 * @max: function oarameter
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + (sizeof(int)));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
