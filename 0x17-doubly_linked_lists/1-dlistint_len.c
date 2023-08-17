#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Prints the number of elements of a doubly linked list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: nimber of nodes in the lost
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
