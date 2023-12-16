#include <stdio.h>
#include <stdlib.h>

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
    size_t i;
    int mid;

    if (array == NULL || size == 0)
        return -1;

    printf("Searching in array:");
    for (i = 0; i < size; i++)
    {
        printf(" %d", array[i]);
        if (i < size - 1)
            printf(",");
    }
    printf("\n");

    mid = (size - 1) / 2;

    if (array[mid] == value)
    {
        if (size == 1)
            return mid;
        return advanced_binary(array, mid + 1, value);
    }
    else if (array[mid] < value)
    {
        return advanced_binary(array + mid + 1, size - (mid + 1), value);
    }
    else
    {
        return advanced_binary(array, mid, value);
    }
}

