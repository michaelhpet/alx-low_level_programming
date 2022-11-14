#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int _strlen(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int not_digits(char *s);
char *strdecrement(char *s);
char *_strcpy(char *dest, char *src);
char *prepend_zero(char *s, char *dest, int s_len, int size);
char *trim_zero(char *s);
char *infinite_add(char *n1, char *n2, unsigned int size_r);

#endif
