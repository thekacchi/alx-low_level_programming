#include "hash_t_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table
 * @key: key of the value
 * @value: the value to set
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elem;
	long int index;

	if (!ht)
		return (0);
	if (!key || strlen(key) == 0)
		return (0);

	new_elem = malloc(sizeof(hash_node_t *));
	if (!new_elem)
		return (0);

	new_elem->key = strdup(key);
	new_elem->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size)
	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;
	return (1);
}
