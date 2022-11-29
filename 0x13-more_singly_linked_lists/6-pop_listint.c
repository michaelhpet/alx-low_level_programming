#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head of list
 * Return: property n of head, or 0 if link is empty
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *old_head;

	if (head == NULL)
		return (0);

	old_head = *head;
	*head = (*head)->next;

	n = old_head->n;
	free(old_head);

	return (n);
}

