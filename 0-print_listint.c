#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints how many elements in a list
 * @h: head of the list
 * Return: count of list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
