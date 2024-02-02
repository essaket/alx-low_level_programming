#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 *
 * Return: a void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *dht;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			dht = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = dht;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
