#include "hash_tables.h"

/**
 * hash_table_delete - prints a hash table
 * @ht: the hash table
 * return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		if (current)
		{
			while (current)
			{
				temp = current->next;
				free(current->value);
				free(current->key);
				free(current);
				current = temp;
			}
		}
		else
		{
			free(current);
		}
	
	}
	free(ht->array);
	free(ht);
}
