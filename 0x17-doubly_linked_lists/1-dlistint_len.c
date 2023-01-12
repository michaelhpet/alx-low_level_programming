#include "lists.h"

/**
 * dlistint_len - computes the number of elements in a dlistint_t list
 * @h: pointer to head node
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes;
	const dlistint_t current;

	current = h;

	n_nodes = 0;
	while (current)
	{
		n_nodes++;
		current = current->next;
	}

	return (n_nodes);
}
