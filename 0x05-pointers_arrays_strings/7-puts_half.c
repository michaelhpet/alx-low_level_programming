#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 1)
		len = ((len - 1) / 2) + 1;
	else
		len /= 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}

	_putchar(10);
}
