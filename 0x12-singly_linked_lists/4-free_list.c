#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head node of list
*/
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;

	while (head)
	{
		free(head->next);
		head = head->next;
	}

	free(tmp);
}
