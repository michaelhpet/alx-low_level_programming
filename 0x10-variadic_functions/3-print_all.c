#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list args;
	void arg;
	unsigned int i, j, format_len;

	format_t formats[] = {
		{"c", char},
		{"i", int},
		{"f", float},
		{"s", char *},
		{NULL, NULL},
	};

	va_start(args, format);

	format_len = _strlen(format);

	i = 0;
	while (i < format_len)
	{
		j = 0;
		while (formats[j].specifier)
		{
			if (format == formats[j].specifier)
			{
				arg = va_arg(args, formats[j].type);
				printf("%%s", formats[j].specifier, arg);
			}
		}

		if (i < (format_len - 1))
			printf(", ");
	}

	printf("\n");
}

/**
 * _strlen - computes the length of a string
 * @s: string which length to compute
 * Return: length of s
*/
unsigned int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (s[len] != 0)
		len++;

	return (len);
}

