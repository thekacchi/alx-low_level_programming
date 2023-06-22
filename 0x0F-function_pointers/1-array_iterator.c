#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - prints elements of an array
 * @array: function para
 * @size: function para
 * @action: function para
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	size_t i;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
