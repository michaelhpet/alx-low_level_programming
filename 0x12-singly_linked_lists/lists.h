#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>

/**
 * struct list - a list of string structs
 * @str: string value
 * @len: length of str
 * @next: next string node
*/
struct list
{
	char *str;
	int len;
	struct list *next;
};

/**
 * list_t - typedef for struct list
*/
typedef struct list list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void _constructor(void) __attribute__((constructor));

#endif /* _LISTS_H_ */
