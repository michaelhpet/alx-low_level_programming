#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head of list
 * @n: property n of new node
 * Return: pointer to list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *tail;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);

	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (*head);
	}

	tmp = *head;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->next = tail;
			break;
		}

		tmp = tmp->next;
	}

	return (*head);
}
