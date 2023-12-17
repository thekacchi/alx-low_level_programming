#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list using Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, i, prev;
    listint_t *current, *next;

    if (list == NULL || size == 0)
        return NULL;

    jump = sqrt(size);
    current = list;

    while (current && current->n < value)
    {
        prev = current->index;
        for (i = 0; i < jump && current->next; i++)
        {
            current = current->next;
        }

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);

    current = list;

    while (current && current->index < prev)
    {
        current = current->next;
    }

    while (current && current->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        if (current->n == value)
            return current;

        current = current->next;
    }

    return NULL;
}
