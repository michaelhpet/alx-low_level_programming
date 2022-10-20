#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int h, i, j;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (h = 1; h < (size + 1); h++)
		{
			for (i = 0; i < (size - h); i++)
			{
				_putchar(32);
			}
			for (j = 0; j < h; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
