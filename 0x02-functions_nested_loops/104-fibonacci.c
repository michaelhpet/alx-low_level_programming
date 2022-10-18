#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long i, j, k, tmp;

	for (i = 1, j = 1, k = 2; i < 100; i++)
	{
		if (i == 1)
			printf("%lu", i);
		else if (i == 2)
			printf("%lu", i);
		else
		{
			printf("%lu", j + k);
			tmp = j;
			j = k;
			k += tmp;
		}

		if (i < 99)
			printf(", ");
	}

	printf("\n");

	return (0);
}
