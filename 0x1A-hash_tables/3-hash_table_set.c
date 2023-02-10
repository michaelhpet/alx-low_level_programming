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
	hash_node_t *node, *current;
	char *value_dup, *key_dup;

	if (!ht || !key || !key[0] || !value)
		return (0);
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_dup;
			return (1);
		}
		current = current->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_dup);
		return (0);
	}
	key_dup = strdup(key);
	if (key_dup == NULL)
	{
		free(value_dup);
		free(node);
		return (0);
	}
	node->key = key_dup;
	node->value = value_dup;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
