#include "lists.h"

/**
 * sum_listint - returns the sum of all data ofa  listint_t linked list
 * @head: head of list
 * Return: sum of all properties n in list
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
