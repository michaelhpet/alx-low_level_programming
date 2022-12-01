/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: decimal number to parse
 * @index: index of bit to set
 * Return 1 (success), -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}
