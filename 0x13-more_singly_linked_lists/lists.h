#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>

/**
 * struct listint - a listint struct
 * @n: number
 * @next: next node
*/
struct listint
{
	int n;
	struct listint *next;
};

/**
 * listint_t - typedef for listint struct
*/
typedef struct listint listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* _LISTS_H_ */
