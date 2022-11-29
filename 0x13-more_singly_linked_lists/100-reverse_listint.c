#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of list
 * Return: new head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fore, *hind;

	if (head == NULL || *head == NULL)
		return (NULL);

	hind = NULL;
	while ((*head)->next)
	{
		fore = (*head)->next;
		(*head)->next = hind;
		hind = *head;
		*head = fore;
	}

	(*head)->next = hind;

	return (*head);
}
