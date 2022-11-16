#include "function_pointers.h"

/**
 * print_name - prints a name using a callback function
 * @name: name string
 * @f: callback function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
