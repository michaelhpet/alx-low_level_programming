#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of list
 * @index: index to look for
 * Return: index-th node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index;

	current_index = 0;
	while (head)
	{
		if (current_index == index)
			return (head);

		head = head->next;
		current_index++;
	}

	return (NULL);
}
