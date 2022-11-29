#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of list
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h)
	{
		count++;
		printf("%d\n", l->n);
		h = h->next;
	}

	return (count);
}
