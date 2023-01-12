#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	if (current == NULL)
		return;

	while (current->next)
	{
		current = current->next;
		free(current->prev);
	}

	if (current)
		free(current);
}
