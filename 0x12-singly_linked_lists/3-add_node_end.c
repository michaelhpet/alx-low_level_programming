#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: pointer to head of list (first node)
 * @str: string value of new tail
 * Return: pointer to new tail
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *tail;

	tail = malloc(sizeof(list_t));
	if (tail == NULL || str == NULL)
	{
		free(tail);
		return (NULL);
	}

	tail->str = strdup(str);
	tail->len = strlen(str);
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (*head);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = tail;

	return (*head);
}
