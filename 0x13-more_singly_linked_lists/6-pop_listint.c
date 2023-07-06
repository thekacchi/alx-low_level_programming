#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head bode of a listint list
 * @head: pointer to the head
 * @Return: data (n) of head node or 0 is head node is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return 0;

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
