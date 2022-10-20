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
		n *= -1;
	}
	if (n < 10)
		_putchar(n + 48);
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar((n / 1000) + 48);
		_putchar(((n / 100) % 10) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 10000 && n < 100000)
	{
		_putchar((n / 10000) + 48);
		_putchar(((n / 1000) % 10) + 48);
		_putchar(((n / 100) % 10) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 100000 && n < 1000000)
	{
		_putchar((n / 100000) + 48);
		_putchar(((n / 10000) % 10) + 48);
		_putchar(((n / 1000) % 10) + 48);
		_putchar(((n / 100) % 10) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
}
