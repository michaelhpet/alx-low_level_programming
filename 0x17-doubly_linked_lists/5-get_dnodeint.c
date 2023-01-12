#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to head node
 * @index: index of node to get
 * Return: pointer to node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t current;

	current = head;

	i = 0;
	while (current)
	{
		if (i == index)
			return (current);

		i++;
		current = current->next;
	}

	return (NULL);
}
