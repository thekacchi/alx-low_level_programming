#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_dnodeint_at_index - inswrts abnew node
 * at given position in doubly linked list
 * @h: pointer to pointer to the head of the list
 * @idx: index at whixh new node should be inserted
 * @n: value to be added to the new node
 *
 * Return: address of the new node or return if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next != NULL)
			{
				temp->next->prev = new_node;
			}
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}

	free(new_node);
	return (NULL);
}
