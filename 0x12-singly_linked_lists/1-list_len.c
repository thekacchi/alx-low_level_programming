#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - counts elements in a list
 * @h: list
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
