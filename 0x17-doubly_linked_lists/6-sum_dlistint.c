#include "lists.h"

/**
 * sum_dlistint - sums all the data of a dlistint_t list
 * @head: pointer to head of list
 * Return: sum of all n members of list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	sum = 0;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
