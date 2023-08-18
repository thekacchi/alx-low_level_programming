#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data
 * (n) of a dlistint_t linked list
 * @head: Pointer to head of doubly linked list
 * Return: Sum of all the data, or 0 of list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
