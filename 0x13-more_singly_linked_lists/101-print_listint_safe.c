#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of list
 * Return: number of nodes in list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx;

	nodes = list_len(head);

	if (nodes == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

/**
 * list_len - returns total unique nodes in a linked list
 * @head: head of list
 * Return: length of unique elements of list
*/
size_t list_len(const listint_t *head)
{
	size_t count;
	const listint_t *fore, *hind;

	count = 1;
	hind = head->next;
	fore = hind->next;

	while (fore)
	{
		if (hind == fore)
		{
			hind = head;
			while (hind != fore)
			{
				count++;
				hind = hind->next;
				fore = fore->next;
			}

			hind = hind->next;
			while (hind != fore)
			{
				count++;
				hind = hind->next;
			}

			return (count);
		}

		hind = hind->next;
		fore = (fore->next)->next;
	}

	return (0);
}
