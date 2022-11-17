#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

/**
 * struct format - format specifier
 * @specifier: char specifying format
 * @type: correspondin type for specifier
*/

struct format
{
	char specifier;
	char *type;
};

/**
 * format_t - type definition for format
*/
typedef struct format format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
unsigned int _strlen(char *s);

#endif /* _VARIADIC_FUNCTIONS_H_ */
