#include "main.h"
#include <stdlib.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result into
 * @size_r: size of r
 * Return: pointer to r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_len, n2_len, units, tens;
	char *tmp_n1, *tmp_n2;

	n1_len = char_len(n1), n2_len = char_len(n2);

	if (size_r < (n1_len + 1) || size_r < (n2_len + 1))
		return (0);

	tmp_n1 = malloc(sizeof(char) * size_r);
	tmp_n2 = malloc(sizeof(char) * size_r);

	n1 = prepend_zero(n1, tmp_n1, n1_len, size_r);
	n2 = prepend_zero(n2, tmp_n2, n2_len, size_r);

	tens = 0;
	for (i = 1; i <= size_r; i++)
	{
		units = (n1[size_r - i] - 48) + (n2[size_r - i] - 48) + tens;
		if (units > 9)
		{
			tens = units / 10;
			units %= 10;
		}
		else
			tens = 0;
		r[size_r - i] = units + 48;
	}
	r[size_r] = '\0';

	r = trim_zero(r);
	if (tens > 0 || char_len(r) > size_r - 1)
	{
		free(tmp_n1);
		free(tmp_n2);
		return (0);
	}

	return (r);
}


/**
 * char_len - computes the length of a string
 * @s: string
 * Return: length of s
 */

int char_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * prepend_zero - prepends zeros to the beginning of a strinf
 * @s: string
 * @dest: pointer to write into
 * @s_len: length of s
 * @size: desired length of string
 * Return: pointer to result
 */

char *prepend_zero(char *s, char *dest, int s_len, int size)
{
	int i, diff;

	diff = size - s_len;
	for (i = 0; i < size; i++)
	{
		if (i < diff)
			dest[i] = 48;
		else
			dest[i] = s[i - diff];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * trim_zero - removes leading zero from string
 * @s: string to parse
 * Return: pointer to s
 */

char *trim_zero(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] - 48 != 0)
		{
			s = s + i;
			break;
		}
	}

	return (s);
}
