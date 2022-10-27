#include "main.h"

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
	int units, tens, diff;
	unsigned int i, n1_len, n2_len;
	char *tmp_n1, *tmp_n2;

	n1_len = char_len(n1), n2_len = char_len(n2);

	if (size_r < n1_len || size_r < n2_len)
		return (0);
	else
	{
		n1 = prepend_zero(n1, n1_len, size_r);
		n2 = prepend_zero(n2, n2_len, size_r);
	}

	r[size_r] = '\0';
	tens = 0;
	for (i = 1; i <= size_r; i++)
	{
		units = (n1[size_r - i] - 48) + (n2[size_r - i] - 48) + tens;
		if (units > 9)
		{
			tens = units / 10;
			units %= 10;
		}
		r[size_r - i] = units + 48;
	}

	if (tens > 0)
		return (0);

	return (r);
}


/**
 * char_len - computes the length of a string
 * @s: string
 * Return: length of s
 */

unsigned int char_len(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * prepend_sero - prepends zeros to the beginning of a strinf
 * @s: string
 * @s_len: length of s
 * @size: desired length of string
 * Return: pointer to result
 */

char *prepend_zero(char *s, int s_len, int size)
{
	char *tmp;
	int i, diff;

	diff = size - s_len;
	for (i = 0; i < size; i++)
	{
		if (i < diff)
			tmp[i] = 48;
		else
			tmp[i] = s[i - diff];
	}

	tmp[i] = '\0';

	return (tmp);
}
