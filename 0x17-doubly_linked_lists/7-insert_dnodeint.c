#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head node
 * @idx: index where to add
 * @n: n member of new node
 * Return: pointer to head
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t  *new_node, *current = *h;

	if (idx == 0)
	{
		if (add_dnodeint(h, n) == NULL)
			return (NULL);
		return (*h);
	}

	while (current)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			current->prev = new_node;
			return (*h);
		}
		i++, current = current->next;
	}

	if (i == idx)
	{
		if (add_dnodeint_end(h, n) == NULL)
			return (NULL);
		return (*h);
	}

	return (NULL);
}