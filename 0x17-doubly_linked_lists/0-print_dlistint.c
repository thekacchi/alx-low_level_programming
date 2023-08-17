#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints elements of a doubly linked list
 * @h: pointer to the head of the doibly linked list
 *
 * Return: nimber of nodes in the lost
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
