#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, n;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	n = 0;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			if (current->next)
				n = 1;
			current = current->next;
		}
	}
	printf("}\n")
}
