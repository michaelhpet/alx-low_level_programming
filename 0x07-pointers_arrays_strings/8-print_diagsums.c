#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of
 * integers
 * @a: 2D array
 * @size: size of a
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0, sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;
	for (j = 0; j < size; j++)
	{
		sum2 += a[j];
		a -= size;
	}

	printf("%i, %i\n", sum1, sum2);
}
