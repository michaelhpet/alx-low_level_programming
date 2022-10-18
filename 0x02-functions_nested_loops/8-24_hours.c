#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: returns void
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);

			_putchar(58);

			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);

			_putchar(10);
		}
	}
}
