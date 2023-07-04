#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints items in a list
 * @h: pointer to the first list
 * Return: count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}

	else
	{
		while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", count, h->str);
		}

		count++;
		h = h->next;
	}

	return (count);
	}
}
