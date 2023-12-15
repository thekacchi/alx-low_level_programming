#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches a value in an array using ~ algorithm
 * @array: the areay to he searched
 * @size: size of the areay;
 * @value: value to be found
 * Return: index of value of 1- if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	printf("Value checked array[%lu] is out of range\n", (unsigned long)high);
	return (-1);
}
