#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int i, digits;
	double tmp_n;
	unsigned int big_n;

	tmp_n = n;
	if (n < 0)
	{
		_putchar(45);
		tmp_n *= -1;
	}

	big_n = tmp_n;
	digits = count_digits(big_n);
	if (big_n < 10)
		_putchar(big_n + 48);
	else if (big_n > 9 && big_n < 100)
	{
		_putchar((big_n / 10) + 48);
		_putchar((big_n % 10) + 48);
	}
	else if (big_n > 99 && big_n < 1000)
	{
		_putchar((big_n / 100) + 48);
		_putchar(((big_n / 10) % 10) + 48);
		_putchar((big_n % 10) + 48);
	}
	else
	{
		_putchar((big_n / _pow(10, digits - 1)) + 48);
		for (i = (digits - 2); i > 0; i--)
			_putchar(((big_n / _pow(10, i)) % 10) + 48);
		_putchar((big_n % 10) + 48);
	}
}

/**
 * count_digits - count number of digits of an integer
 * @number: integer which digits to count
 * Return: number of digits in n
 */
int count_digits(unsigned int number)
{
	int digits;

	unsigned int tmp = number;

	digits = (number > 9) ? 2 : 1;

	while ((tmp / 10) > 9)
	{
		digits++;
		tmp /= 10;
	}

	return (digits);
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

	return (result);
}
