#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - uses binary algorithm to serach an array
 * @array: function parameter
 * @size: function parameter
 * @value: function parameter
 * Return: always 0
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= (size_t)high; i++)
		{
			printf("%d", array[i]);
			if (i < (size_t)high)
			{
				printf(", ");
			}

		}
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
	/** value not present */
}
