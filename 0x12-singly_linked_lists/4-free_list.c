#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head node of list
*/
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);

		head = next;
	}
}
