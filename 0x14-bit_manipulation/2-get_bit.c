#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number to parse
 * @index: index of bit of interest
 * Return: bit value at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, bits;
	unsigned long int *nums;

	if (index >= (sizeof(unsigned long int) * 8)
			return (-1);

	bits = count_bits(n);
	nums = malloc(sizeof(unsigned long int) * bits);
	if (nums == NULL)
		return (-1);

	i = 0;
	while (n > 0)
	{
		nums[i++] = n % 2;
		n /= 2;
	}

	for (i = 0; i < bits; i++)
	{
		if (i == index)
			return (nums[i]);
	}

	free(nums);
	return (-1);
}

/**
 * count_bits - return number of binary digits for an integer
 * @num: integer to parse
 * Return: number of bits in num binary representation
*/
unsigned int count_bits(unsigned int num)
{
	unsigned int count;

	if (num == 0 || num == 1)
		return (1);

	count = 0;
	while (num > 0)
	{
		num /= 2;
		count++;
	}

	return (count);
}
