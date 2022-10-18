#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	unsigned long j, k, tmp;

	for (i = 1, j = 1, k = 2; i < 99; i++)
	{
		if (i == 1)
			printf("%d", i);
		else if (i == 2)
			printf("%d", i);
		/*else if (i > 92)
		{
			printf("%.0Lf", (j + k) / 10);
			printf("%.0Lf", (j + k) % (long double)10);
			tmp = j;
			j = k;
			k += tmp;
		}*/
		else
		{
			printf("%lu", j + k);
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
