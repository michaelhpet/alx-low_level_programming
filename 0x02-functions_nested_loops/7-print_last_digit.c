#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number which last digit to print
 *
 * Return: returns last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit + 48);
	
	_putchar(10);

	return (last_digit);
}
