#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of list
 * Return: number of nodes (or elements) in h
*/
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
