#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index of a dlistint_t list
 * @head: pointer to pointer to head
 * @index: index of node to delete
 * Return: 1 if delete succeeds, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	current = *head;

	if (current && index == 0)
	{
		*head = current->next;
		if (current->next)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	i = 0;
	while (current)
	{
		if (i == index)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}

		i++;
		current = current->next;
	}

	return (-1);
}
