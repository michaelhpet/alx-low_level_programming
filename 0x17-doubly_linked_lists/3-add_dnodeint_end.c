#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to head node
 * @n: integer member of new node struct
 * Return: address of new head[/node]
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current = *head;
	if (current == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	
	if (current->next == NULL)
	{
		new_node->prev = current;
		current->next = new_node;
		return(*head);
	}

	while(current->next)
		current = current->next;

	new_node->prev = current;
	current->next = new_node;
	return(*head);
}
