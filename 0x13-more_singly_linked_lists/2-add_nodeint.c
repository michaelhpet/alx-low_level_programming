#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head of list
 * @n: property n of new node
 * Return: address of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp, *tail;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);

	tail->n = n;
	tail->next = NULL;

	tmp = *head;
	while (tmp)
		tmp = tmp->next;

	tmp->next = tail;

	return (*head);
}
