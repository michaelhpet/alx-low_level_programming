#include <stdio.h>
#include <math.h>

/**
 * main - prints prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	unsigned long i, n, n_root;

	n = 612852475143;
	n_root = sqrt(n);

	for (i = 3; i < n_root; i++)
	{
		while((n % i == 0) && n != i)
			n /= i;
	}

	printf("%lu\n", n);

	return (0);
}
