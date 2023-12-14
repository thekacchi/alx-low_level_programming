#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using jump search
 * @array: pointer to the first element
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, start, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	printf("Value checked array [%lu] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		prev += step;
		if (prev >= size)
			break;
		printf("Value checked array [%lu] = [%d]\n", prev, array[prev]);
		start = prev - step;
		printf("Value found between indexes [%lu] and [%lu]\n", start, prev);
		for (i = start; i <= prev && i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				/** found */
				return (i);
		}
	}
	return (-1);
}
