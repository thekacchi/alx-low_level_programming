#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - main entry
 * @ptr: function parameter
 * @old_size: function parameter
 * @new_size: function oarameter
 * Return: pointer to allocates meme
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *npointer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		npointer = malloc(new_size);

		if (npointer == NULL)
			return (NULL);

		return (npointer);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	npointer = malloc(new_size);

	if (npointer == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		npointer[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (npointer);
}
