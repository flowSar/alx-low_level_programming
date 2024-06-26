#include "hash_tables.h"

/**
 * hash_table_set - this function add element to the hash table
 * @ht: hash table reference
 * @key: key elment
 * @value: valuen of element (node)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *prev_node;
	unsigned long int index;
	int count;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	count = ht->count;

	if (node == NULL)
		return (0);
	node->value = strdup(value);
	node->key = strdup(key);

	if (ht->array[index] == NULL)
	{
		count += 1;
		ht->count = count;
		ht->array[index] = node;
	}
	else
	{
		count += 1;
		ht->count = count;
		prev_node = ht->array[index];
		ht->array[index] = node;
		ht->array[index]->next = prev_node;
	}

	return (1);
}
