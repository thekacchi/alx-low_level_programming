#include <stdio.h>
#include "search_algos.h"

int advanced_binary_recursive(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary - Searches for the first occurrence of a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the first occurrence of value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the current search range
 * @right: Right index of the current search range
 * @value: Value to search for
 * Return: Index of the first occurrence of value, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    if (left > right)
        return -1;

    size_t mid = (left + right) / 2;

    printf("Searching in array: ");
    for (size_t i = left; i <= right; ++i)
    {
        printf("%d", array[i]);
        if (i < right)
        {
            printf(", ");
        }
    }
    printf("\n");

    if (array[mid] == value)
    {
        if (mid == left || array[mid - 1] != value)
            return mid; // Found the first occurrence
        else
            return advanced_binary_recursive(array, left, mid - 1, value);
    }
    else if (array[mid] < value)
    {
        return advanced_binary_recursive(array, mid + 1, right, value);
    }
    else
    {
        return advanced_binary_recursive(array, left, mid - 1, value);
    }
}
