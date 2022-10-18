#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: offset number to start from
 *
 * Return: returns void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);

			if (n < 98)
				printf(", ");
		}

		printf("\n");
	}
	else
	{
		for (; n > 97; n--)
		{
			printf("%d", n);

			if (n > 98)
				printf(", ");
		}

		printf("\n");
	}
}
