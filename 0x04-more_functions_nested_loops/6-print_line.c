#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print _
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);

		_putchar(10);
	}
}
