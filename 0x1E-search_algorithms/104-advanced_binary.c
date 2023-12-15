#include <stdio.h>
#include "search_algos.h"

int advanced_binary_recursive(int *array, size_t start, size_t end, int value);

/**
 * advanced_binary - searches for a value in sorted array of intd using recursion
 * @array: pointer to the first element in the array to be searched
 * @size: number if elements in the array
 * @value: value to search for
 * Return: The index of the value or -1 if not found/NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	
	return
	(advanced_binary_recursive(array, 0, size - 1, value));
}
/**
 * advanced_binary_recursive - recursive func
 * @array: the array to be searxhed.. pointer to first itmrn
 * @start: starting point
 * @end: end point
 * @value: value were looking for
 * Return: always 0
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (start > end)
		return (-1);
	
	printf("Searching in array: %d", array[start]);
	for (i = start + 1; i <= end; i++)
		printf(", %d", array[i]);
	printf("\n");

	i = (start + end) / 2;
	if (array[i] == value)
		return (i);
	
	if (array[i] > value)
		return (advanced_binary_recursive(array, i + 1, end, value));
	return advanced_binary_recursive(array, i + 1, end, value);
}	
