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

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->value = strdup(value);
	node->key = strdup(key);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		prev_node = ht->array[index]->next;
		while (prev_node)
		{
			prev_node = prev_node->next;
		}
		prev_node = node;
	}

	return (1);
}
