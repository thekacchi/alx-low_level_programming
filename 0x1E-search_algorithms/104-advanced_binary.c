#include <stdio.h>
#include <stdlib.h>

int advanced_binary_recursive(int *array, size_t start, size_t end, int value);

/**
 * advanced_binary - Searches for a value in a sorted array using recursion
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for binary search
 * @array: Pointer to the first element of the array to search in
 * @start: Start index of the current subarray
 * @end: End index of the current subarray
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t i;
	int mid;

	if (start > end)
		return (-1);

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
	printf(" %d", array[i]);
	if (i < end)
		printf(",");
	}
	printf("\n");

	mid = (start + end) / 2;

	if (array[mid] == value)
	{
	if (mid == 0 || array[mid - 1] != value)
		return (mid);
	else
		return (advanced_binary_recursive(array, start, mid, value));
	}
	else if (array[mid] < value)
	{
		return (advanced_binary_recursive(array, mid + 1, end, value));
	}
	else
	{
		return (advanced_binary_recursive(array, start, mid - 1, value));
	}
}
