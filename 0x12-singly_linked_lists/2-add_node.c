#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int count = 0;

	while (str[count])
		count++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = count;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
