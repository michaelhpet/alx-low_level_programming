#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list to print
 * Return: number of nodes in h
*/
size_t print_list(const list_t *h)
{
	size_t count;

	while (h->next)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}

	return (count);
}
