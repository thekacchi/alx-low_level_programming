#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", count, h->str);
		}

		count++;
		h = h->next;
	}

	return (count);
}
