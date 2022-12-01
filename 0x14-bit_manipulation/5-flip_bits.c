/**
 * flip_bits - returns the number of bits needed to be fliped
 * to get from one number to another
 * @n: initial number
 * @m: final number
 * Return: total bit flips from n to m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	count = 0;
	while (n <= m)
	{
		if (n == m)
			break;
		n |= 1;
		count++;
	}

	return (count);
