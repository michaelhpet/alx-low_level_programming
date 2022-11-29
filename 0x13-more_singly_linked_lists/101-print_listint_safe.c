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
	long int ptr_diff;

	if (head == NULL)
		exit(98);

	while (head)
	{
		ptr_diff = head - head->next;
		count++;

		printf("[%p] %d\n", (void *)head, head->n);

		if (ptr_diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
			break;
		}
	}

	return (count);
}
