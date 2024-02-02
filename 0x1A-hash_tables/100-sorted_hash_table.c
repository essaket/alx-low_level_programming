#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: a sorted hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int x;
	shash_table_t *sht;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_node_t) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		sht->array[x] = NULL;
	return (sht);
}

/**
 * shash_table_set -  a function that adds an element to the sorted hash table
 * @ht: a hash table
 * @key: the key
 * @value: the value of the key
 *
 * Return: 1 if success, 0 otherwize
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_copy);
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get -  a function that retrieves a value associated with a key
 * @ht: a hash table
 * @key: the key
 *
 * Return: the value associated with the element or NULL if failed
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - function that print ht using the sorted linked list
 * @ht: hash table
 *
 * Return: a void
 */

void shash_table_print(const shash_table_t *ht)
{
	char flag = 0; /* 0 if no data has been printed yet*/
	shash_node_t *pht;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	pht = ht->shead;
	while (pht != NULL)
	{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", pht->key, pht->value);
			flag = 1;
			pht = pht->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash tables key/value pairs
		in reverse order using the sorted linked list
 * @ht: the hash table
 *
 * Return: a void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	char flag = 0; /* 0 if no data has been printed yet*/
	shash_node_t *pht;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	pht = ht->stail;
	while (pht != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", pht->key, pht->value);
		flag = 1;
		pht = pht->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a sorted hash table
 * @ht: a hash table
 *
 * Return: a void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int x;
	shash_node_t *dht;

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
	ht->shead = NULL;
	ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
