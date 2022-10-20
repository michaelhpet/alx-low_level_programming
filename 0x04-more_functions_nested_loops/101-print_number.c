#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		_putchar((n * - 1) + 48);
	}
	else if (n < 10)
		_putchar(n + 48);
	else
		_putchar(n);
}
