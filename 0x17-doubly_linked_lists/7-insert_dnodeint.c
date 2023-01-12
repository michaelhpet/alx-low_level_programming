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
	dlistint_t *new_node, current;
	unsigned int i;

	current = *h;

	if (current == NULL && idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (*h);
	}

	i = 0;
	while (current)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			new_node->next = current;
			current->prev = new_node;
			return (*h);
		}
		current = current->next;
	}

	return (NULL);
}
