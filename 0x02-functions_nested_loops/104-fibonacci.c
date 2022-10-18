#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k, tmp;
	unsigned long sum = 0;

	for (i = 1, j = 1, k = 2; i < 100; i++)
	{
		if (i == 1)
			printf("%lu", 1);
		else if (i == 2)
			printf("%lu", 2);
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
