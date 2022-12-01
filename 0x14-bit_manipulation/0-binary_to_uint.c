#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number string
 * Return: unsigned int representation of b
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, bits, result;

	if (!b || is_not_bin(b))
		return (0);

	bits = _strlen(b);
	result = 0;
	i = 0;
	while (i < bits)
	{
		result += (b[bits - i - 1] - 48) *  _pow(2, i);
		i++;
	}

	return (result);
}

/**
 * is_not_bin - checks if one or more char in binary string is not 0 or 1
 * @s: string to parse
 * Return: 1 (if not binary), 0 otherwise
*/
int is_not_bin(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] < 48 || s[i] > 49)
			return (1);
		i++;
	}

	return (0);
}

/**
 * _strlen - computes the length of a string
 * @s: string which length to compute
 * Return: length of s
*/
unsigned int _strlen(const char *s)
{
	unsigned int len;

	len = 0;
	while (s[len])
		len++;

	return (len);
}

/**
 * _pow - computes the exponent of a number
 * @base: base number
 * @exp: exponent
 * Return: base raised to power exp
*/
unsigned int _pow(unsigned int base, unsigned int exp)
{
	unsigned int i, result;

	result = 1;
	for (i = 0; i < exp; i++)
		result *= base;

	return (result);
}
