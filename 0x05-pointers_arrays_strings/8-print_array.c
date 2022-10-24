#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * of integers
 * @a: array to print from
 * @n: number of elements in a to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < (n - 1))
			printf(", ");
	}

	printf("\n");
}
