#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: n (integer) times
 *
 * Return: returns void
 */
void print_times_table(int n)
{
	int row, col, value;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row < (n + 1); row++)
		{
			for (col = 0; col < (n + 1); col++)
			{
				value = row * col;

				if (value > 100)
				{
					_putchar((value / 100) + 48);
					_putchar(((value / 10) % 10) + 48);
					_putchar((value % 10) + 48);
				}
				else if (value > 10)
				{
					_putchar(32);
					_putchar((value / 10) + 48);
					_putchar((value % 10) + 48);
				}
				else if (col != 0)
				{
					_putchar(32);
					_putchar(32);
					_putchar(value + 48);
				}
				else
				{
					_putchar(value + 48);
				}

				if (col < n)
				{
					_putchar(44);
					_putchar(32);
				}
			}

			_putchar(10);
		}
	}
}
