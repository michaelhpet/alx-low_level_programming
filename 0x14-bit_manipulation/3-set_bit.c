/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number to parse
 * @index: index of bit to set
 * Return: 1 (success), -1 otherwise
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	*n = *n | mask;

	return (1);
}
