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

	while (curr_idx = index - 1)
	{
		if (head_ref == NULL || head_ref->next == NULL)
			return (-1);

		curr_idx++;
		head_ref = head_ref->next;
	}

	node = head_ref->next;
	head_ref->next = node->next;
	free(node);

	return (1);
}
