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
	unsigned int i, j;
	char *delim;

	format_t formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	i = 0;
	delim = "";
	while (format && format[i])
	{
		j = 0;
		while(j < 4 && format[i] != formats[j].specifier)
			j++;

		if (j < 4)
		{
			printf("%s", delim);
			formats[j].printer(args);
			
			delim = ", ";
		}

		i++;
	}

	va_end(args);

	printf("\n");
}

/**
 * print_char - prints a char using a va_list
 * @:args: variadic args list
*/
void print_char(va_list args)
{
	int char_;

	char_ = va_arg(args, int);

	printf("%c", char_);
}

/**
 * print_int - prints an int using a va_list
 * @args: variadic args list
*/
void print_int(va_list args)
{
	int int_;

	int_ = va_arg(args, int);

	printf("%d", int_);
}

/**
 * print_float - prints a fload using a va_list
 * @args: variadic args list
*/
void print_float(va_list args)
{
	double float_;

	float_ = va_arg(args, double);

	printf("%f", float_);
}

/**
 * print_string - prints a string using a va_list
 * @args: variadic args list
*/
void print_string(va_list args)
{
	char *string;

	string = va_arg(args, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}
