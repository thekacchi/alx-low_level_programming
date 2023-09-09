#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: soze of the hash table
 * Return: the new hash tabke or NULL if errir
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->array = calloc(sizeof(hash_node_t *), size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;
	return (hash_table);
}
