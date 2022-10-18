#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long fibs[50];

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
			fibs[i] = 0;
		else if (i < 3 && i != 0)
			fibs[i] = 1;
		else
		{
			fibs[i] = fibs[i - 1] + fibs[i - 2];
		}
	}

	for (i = 0; i < 50; i++)
	{
		printf("%lu", fibs[i]);

		if (i < 49)
			printf(", ");
	}

	printf("\n");

	return (0);
}
