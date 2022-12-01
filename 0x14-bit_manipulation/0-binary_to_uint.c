/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number string
 * Return: unsigned int representation of b
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int bits, result;

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
unsigned int(unsigned int base, unsigned int exp)
{
	unsigned int i, result;

	result = 1;
	for (i = 0; i < exp; i++)
		result *= base;

	return (result);
}
