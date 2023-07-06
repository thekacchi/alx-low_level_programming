#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in linked list at a certain index
 * @head: pointer to head of the list
 * @index: index of node to be deleted
 * Return: 1 means success, 0- mains fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return(1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
