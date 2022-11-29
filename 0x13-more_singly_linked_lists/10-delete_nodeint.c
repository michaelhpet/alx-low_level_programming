#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at nth index
 * @head: head of list
 * @index: index of list to delete
 * Return: 1 (success), -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int curr_idx;
	listint_t *head_ref, *node;

	if (head == NULL || *head == NULL)
		return (-1);

	head_ref = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(head_ref);

		return (1);
	}

	curr_idx = 0;
	while ((curr_idx < index) && head_ref)
	{
		if (curr_idx == (index - 1))
		{
			node = head_ref->next;
			head_ref->next = node->next;
			free(node);

			return (1);
		}

		curr_idx++;
		head_ref = head_ref->next;
	}

	return (-1);
}
