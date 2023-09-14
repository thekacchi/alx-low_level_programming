#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * return: a hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i, count = 0, count2 = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			count++;
	}

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (count2 == count)
			break;

		current = ht->array[i];
		while (current && current->next)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			printf(", ");
		}
		if (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			count2++;
			if (count2 < count)
				printf(", ");
		}
	}
	printf("}\n");
}
