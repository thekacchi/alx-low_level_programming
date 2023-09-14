#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value acssoc with a hash tab
 * @ht: the hash table
 * @key: the key of the value to retrieve
 * Return: The value or NULL if key doesnt exits
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	current = ht->array[idx];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
