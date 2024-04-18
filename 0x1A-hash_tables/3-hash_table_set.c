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

	int count = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->value = strdup(value);
	node->key = strdup(key);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		count += 1;
		ht->array[index]->count = count;
	}
	else
	{
		prev_node = ht->array[index]->next;
		ht->array[index] = node;
		ht->array[index]->next = prev_node;
		count += 1;
		ht->array[index]->count = count;
	}

	return (1);
}
