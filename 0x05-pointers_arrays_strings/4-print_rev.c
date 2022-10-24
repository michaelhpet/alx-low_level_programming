#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar(10);
}

/**
 * _strlen - computes the length of a string
 * @s: string which length to compute
 * Return: length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
