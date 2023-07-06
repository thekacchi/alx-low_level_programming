#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a listsint_t list
 * @head: points to head of the list
 * Description: starts from the head ant iterates to free memory allocated
 * to each node till it reaches end of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
