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

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	index = key_index(key);
	node->key = key;
	node->value = value;
	node->next = ht->array[index]
	ht->array[index] = node

	return (1);
 }
