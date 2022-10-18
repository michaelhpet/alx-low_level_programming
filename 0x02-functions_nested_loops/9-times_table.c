#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: returns void
 */
void times_table(void)
{
	int row, col, value;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			value = row * col;

			if (value > 9)
			{
				_putchar((value / 10) + 48);
				_putchar((value % 10) + 48);
			}
			else
			{
				_putchar(32);
				_putchar(value + 48);
			}

			if (col < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}

		_putchar(10);
	}
}
