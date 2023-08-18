#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a distant_t linked list
 * @head: Pointer to head of the doubly linked list
 * @index: Index of node from 0
 *
 * Return: Pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
