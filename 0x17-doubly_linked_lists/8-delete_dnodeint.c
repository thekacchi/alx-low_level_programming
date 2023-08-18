#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * in a double linked list
 * @head: pointer to rhe head of the doubly linked list
 * @index: index of the node to be deleted
 * Return: 1 if deletion is successful, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev_node;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (count == index)
		{
			prev_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = prev_node;
			free(temp);
			return (1);
		}
		prev_node = temp;
		temp = temp->next;
		count++;
	}

	return (-1);
}

