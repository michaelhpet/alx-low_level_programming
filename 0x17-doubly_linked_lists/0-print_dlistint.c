#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head node
 * Return: total number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes;
	dlistint_t *current;

	current = h;

	n_nodes = 0;
	while (current)
	{
		n_nodes++;
		current = current->next;
	}

	return (n_nodes);
}
