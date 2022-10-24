#include "main.h"

/**
 * puts2 - prints every other character of a string
 * except the first character
 * @str: string to print
 */
void puts2(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar(10);
}
