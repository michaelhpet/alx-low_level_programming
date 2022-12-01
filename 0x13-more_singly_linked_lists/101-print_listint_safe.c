#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of list
 * Return: number of nodes in list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	count = 0;
	while (head)
	{
		if (head == head->next)
			continue;
		
		if (head->next)
			printf("[%p] %d\n", (void *)head, head->n);
		else
			printf("-> [%p] %d\n", (void *)head, head->n);

		head = head->next;
		count++;
	}

	return (count);
}
