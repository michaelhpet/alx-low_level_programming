#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at nth position
 * @head: pointer to head of list
 * @idx: index to insert into
 * @n: property n of new node
 * Return: head of list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int curr_idx;
	listint_t *node, *tmp, *head_ref;

	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	curr_idx = 0;
	head_ref = *head;
	while (*head)
	{
		if (curr_idx == idx)
		{
			tmp = *head;
			*head = node;
			node->next = tmp;

			return (head_ref);
		}

		curr_idx++;
		head = head->next;
	}

	free(node);
	return (NULL);
}
