#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void _hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char n;

	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		printf("[%lu]", i);
		n = 0;
		while (p)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p-> next;
			n = 1;
		}
		printf("\n");
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int ret;

	ht = hash_table_create(20);
	ret = hash_table_set(ht, "USA", "Washington");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "France", "Paris");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "UK", "London");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Spain", "Madrid");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Germany", "Berlin");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "China", "Beijing");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Russia", "Moscow");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Bahrain", "Manama");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Canada", "Ottawa");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Brazil", "Brasilia");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Sweden", "Stockholm");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Iceland", "Reykjavik");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Japan", "Tokyo");
	printf("%d\n", ret);
	ret = hash_table_set(ht, "Australia", "Canberra");
	printf("%d\n", ret);
	_hash_table_print(ht);
	return (EXIT_SUCCESS);
}
