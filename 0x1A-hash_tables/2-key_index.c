#include "hash_tables.h"

/**
 * key_index - Computes the indexof a key
 * @key: the key to compute
 * @size: size of the hash map
 * Return: The index attached to the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
