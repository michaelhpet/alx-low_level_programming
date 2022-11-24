#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of list
 * @str: str property of new node
 * Return: addess of new element, or NULL if error
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = head;

	head = tmp;

	return (head);
}
