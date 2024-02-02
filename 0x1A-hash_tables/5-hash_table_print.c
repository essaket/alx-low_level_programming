#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 *
 * Return: a void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	char flag = 0; /* 0 if no data has been printed yet*/
	hash_node_t *pht;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		pht = ht->array[x];
		while (!pht)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", pht->key, pht->value);
			flag = 1;
			pht = pht->next;
		}
	}
	printf("}\n");
}
