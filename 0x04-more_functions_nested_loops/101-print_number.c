#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int i, digits;

	int n_tmp = n;

	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}

	digits = (n >= 10) ? 2 : 1;
	while ((n_tmp / 10) > 10)
	{
		digits++;
		n_tmp /= 10;
	}

	if (n < 10)
		_putchar(n + 48);
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >=100 && n < 1000)
	{
		_putchar((n / 100) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else
	{
		_putchar((n / _pow(10, digits)) + 48);
		for (i = (digits - 2); i > 0; i--)
			_putchar(((n / _pow(10, i)) % 10) + 48);
		_putchar((n % 10) + 48);
	}
}

/**
 * _pow - computes the exponential of a number
 * @base: base number
 * @exp: exponent
 * e.g, _pow(10, 3) = 10 * 10 * 10 = 1000
 * Return: expononential result
 */
int _pow(int base, int exp)
{
	int i, result;

	result = 1;
	for (i = 0; i < exp; i++)
		result *= base;

	return result;
}
