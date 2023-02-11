#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: number of cells for hash table
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *shash_table;

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
		return (NULL);

	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;

	return (shash_table);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @key: key of element to add
 * @value: value fof element to add
 * Return: 1 if succeeds, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	
}

/**
 * shash_table_get - retrieves the value associated with a key
 * @ht: pointer to hash table
 * @key: key which value to retrieve
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;

	if (!ht || !key || !key[0])
		return (NULL);

	current = ht->shead;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	int has_next;
	shash_node_t *current;

	if (ht == NULL)
		return;

	has_next = 0;
	current = ht->shead;
	printf("{");
	while (current)
	{
		if (has_next)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext)
			has_next = 1;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: pointer to hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int has_prev;
	shash_node_t *current;

	if (ht == NULL)
		return;

	has_prev = 0;
	current = ht->stail;
	printf("{");
	while (current)
	{
		if (has_prev)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev)
			has_prev = 1;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *next, *current;

	current = ht->shead;
	while (current)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}

	free(ht->array);
	free(ht);
}
