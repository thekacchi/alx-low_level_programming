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
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
