#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 - 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + 48);

			_putchar((j % 10) + 48);
		}

		_putchar(10);
	}
}

