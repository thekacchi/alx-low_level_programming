#include <stdio.h>
#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
