#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - uses linear search algorithm
 * array: parameter of func
 * value: parameter of func
 * return: always 0 on success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if  (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
