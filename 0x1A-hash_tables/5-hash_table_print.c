#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, has_next;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	has_next = 0;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (has_next)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			if (current->next || i < ht->size - 1)
				has_next = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
