#include <stdio.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL)
