#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long long i, j, k, tmp;

	for (i = 1, j = 1, k = 2; i < 99; i++)
	{
		if (i == 1)
			printf("%llu", i);
		else if (i == 2)
			printf("%llu", i);
		else
		{
			printf("%llu", j + k);
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
