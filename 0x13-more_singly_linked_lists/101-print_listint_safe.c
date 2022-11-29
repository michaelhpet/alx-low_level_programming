#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of list
 * Return: number of nodes in list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j;
	const listint_t *head_ref, *tail_ref;

	if (head == NULL)
		exit(98);

	i = 0;
	head_ref = head;
	tail_ref = NULL;
	while (head_ref)
	{
		printf("[%p] %d\n", (void *)head_ref, head_ref->n);
		i++;
		head_ref = head_ref->next;

		tail_ref = head;
		j = 0;
		while (j < i)
		{
			if (head_ref == tail_ref)
			{
				printf("-> [%p] %d\n", (void *)head_ref, head_ref->n);
				return (i);
			}

			tail_ref = tail_ref->next;
			j++;
		}
	}

	return (i);
}
