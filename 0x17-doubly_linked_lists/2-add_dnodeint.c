#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the head of a doubly linked list
 * @n: value to be added in the new node
 *
 * Return: Address of the new element, NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
