#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints items in a list
 * @h: pointer to the first list
 * Return: count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
		{
		printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		count++;
		h = h->next;
	}

	return (count);
}
