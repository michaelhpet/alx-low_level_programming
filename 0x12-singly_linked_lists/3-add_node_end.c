#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: pointer to head of list (first node)
 * @str: string value of new tail
 * Return: pointer to new tail
*/
*add_node_end(list_t **head, const char *str)
{
	list_t *tail;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL || str == NULL)
	{
		free(tmp);
		return (NULL);
	}

	tail->str = strdup(str);
	tail->len = strlen(str);
	tail->next = NULL;

	while (*head)
	{
		if (*head->next == NULL)
			*head->next = tail;

		*head = *head->next;
	}

	return (tail);
}
