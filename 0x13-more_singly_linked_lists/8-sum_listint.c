#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all the data in linked list
 * @head: head of the list
 * Return: sum of data or NULL
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
