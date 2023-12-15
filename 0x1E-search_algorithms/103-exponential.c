#include <stdio.h>
#include "search_algos.h"

/**
 * print_range - Prints the elements in the specified range of the array
 * @array: Pointer to the first element of the array
 * @left: Left index of the range
 * @right: Right index of the range
 */
void print_range(int *array, size_t left, size_t right)
{
	size_t k;

	printf("Searching in array: ");
                for (k = left; k <= right; ++k)
                {
                        printf("%d", array[k]);
                        if (k < right)
                        {
                                printf(", ");
                        }
                }
                printf("\n");
}

/**
 * binary_search2 - Performs binary search within a specified range of the array
 * @array: Pointer to the first element of the array
 * @left: Left index of the range
 * @right: Right index of the range
 * @value: Value to search for
 * Return: Index of the first occurrence of value, or -1 if not found
 */
int binary_search2(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
        {
                print_range(array, left, right);

		mid = (left + right) / 2;

                if (array[mid] == value)
                {
                        return (mid);
                }

                if (array[mid] < value)
                        left = mid + 1;
                else
                        right = mid - 1;
        }
        return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the first occurrence of value, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return binary_search2(array, left, right, value);
}
