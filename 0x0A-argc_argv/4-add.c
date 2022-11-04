#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		puts("0");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{

		if (not_digits(argv[i]))
		{
			puts("Error");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}

/**
 * not_digits - checks if a string contains symbols that are not digits
 * @s: string
 * Return: 0 if all symbols are digits, 1 otherwise
 */

int not_digits(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] < 48 || s[i] > 57)
			return (1);
	}

	return (0);
}
