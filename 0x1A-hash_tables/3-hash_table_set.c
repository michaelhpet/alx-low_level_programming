#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add element to
 * @key: the key
 * @value: the value
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *value_dup, *key_dup;

	if (ht || !key || !key[0] || !value)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	key_dup = strdup(value);
	if (key_dup == NULL)
	{
		free(node);
		return (0);
	}

	value_dup = strdup(value);
	if (value_dup == NULL)
	{
		free(key_dup);
		free(node);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node->key = key_dup;
	node->value = value_dup;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
