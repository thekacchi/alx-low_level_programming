#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listsint_t list
 * @head: points to head of the list
 *
 * Desc: starts from the head ant iterates to free memory allocated
 * to each node till it reaches end of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
	*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
