#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: head of list
 * Return: number of elements in list
*/
size_t listint_len(const listint_t *h)
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
