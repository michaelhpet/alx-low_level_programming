#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	long double i, j, k, tmp;

	for (i = 1, j = 1, k = 2; i < 99; i++)
	{
		if (i == 1)
			printf("%.0Lf", i);
		else if (i == 2)
			printf("%.0Lf", i);
		else
		{
			printf("%.0Lf", j + k);
			tmp = j;
			j = k;
			k += tmp;
		}

		if (i < 98)
			printf(", ");
	}

	printf("\n");

	return (0);
}
