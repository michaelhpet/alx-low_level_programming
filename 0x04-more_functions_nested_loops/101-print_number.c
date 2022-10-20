#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int i, digits;
	unsigned int num;

	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}

	num = n;
	digits = count_digits(n);

	if (num < 10)
		_putchar(num + 48);
	else if (num > 9 && num < 100)
	{
		_putchar((num / 10) + 48);
		_putchar((num % 10) + 48);
	}
	else if (num > 99 && num < 1000)
	{
		_putchar((num / 100) + 48);
		_putchar(((num / 10) % 10) + 48);
		_putchar((num % 10) + 48);
	}
	else
	{
		_putchar((num / _pow(10, digits - 1)) + 48);
		for (i = (digits - 2); i > 0; i--)
			_putchar(((num / _pow(10, i)) % 10) + 48);
		_putchar((num % 10) + 48);
	}

	printf("Negative limit: %i", INT_MIN);
	printf("Positive limit: %i", INT_MAX);
}

/**
 * count_digits - count number of digits of an integer
 * @number: integer which digits to count
 * Return: number of digits in n
 */
int count_digits(int number)
{
	int digits;

	double n = number;
	unsigned int n_tmp = n;

	digits = (n > 9) ? 2 : 1;

	while ((n_tmp / 10) > 9)
	{
		digits++;
		n_tmp /= 10;
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
