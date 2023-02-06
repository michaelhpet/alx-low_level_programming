#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: key which index to compute
 * @size: size of array of hash table
 * Return: index at which key/value pair should be stored in hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
