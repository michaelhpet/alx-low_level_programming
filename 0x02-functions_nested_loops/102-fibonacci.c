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

	for (i = 1; i < 51; i++)
	{
		if (i == 1)
			fibs[i - 1] = 1;
		else if (i == 2)
			fibs[i - 1] = 2;
		else
		{
			fibs[i - 1] = fibs[i - 2] + fibs[i - 3];
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
