#include "hash_tables.h"

/**
 * key_index - this function return the index of each key
 * @key: key
 * @size: size of of array of hashtable
 *
 * Return: return the index of the key on hashtable array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
