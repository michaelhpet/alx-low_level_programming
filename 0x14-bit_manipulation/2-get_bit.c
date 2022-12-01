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
	int bits;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/*
	 * left shift creates a bit mask
	 * meaning all 0s but 1 at index of interest
	 * then, 'bitwise and' uses the mask
	 * to get the bit at that index
	*/
	bits = n & (1 << index);

	/*
	 * if bit at said index is not 0,
	 * then it has to be 1 (which will evaluate
	 * to a number greater than 0 in decimal)
	*/
	if (bits > 0)
		return (1);

	return (bits);
}
