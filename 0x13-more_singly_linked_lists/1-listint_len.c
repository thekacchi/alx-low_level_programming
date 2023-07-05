#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints how many elements in a list
 * @h: head of the list
 * Return: count of list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
