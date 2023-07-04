#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return newNode;
}
