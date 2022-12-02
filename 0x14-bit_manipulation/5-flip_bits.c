/**
 * flip_bits - returns the number of bits needed to be fliped
 * to get from one number to another
 * @n: initial number
 * @m: final number
 * Return: total bit flips from n to m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor_bits, count;

	xor_bits = n ^ m;
	count = 0;
	while (xor_bits > 0)
	{
		count += (xor_bits & 1);
		xor_bits >>= 1;
	}

	return (count);
}
