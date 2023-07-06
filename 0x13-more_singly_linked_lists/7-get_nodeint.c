#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: head of the list
 * @index: index of the node from 0
 * Return: nth node of linked list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
