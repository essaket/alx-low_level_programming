#include "hash_table.h"

/**
 * kay_index - gives the index of a key
 * @key: key to get index for
 * @size: size of the hash table
 *
 * Return: index for the key
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
