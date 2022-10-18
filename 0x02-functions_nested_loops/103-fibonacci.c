#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long fibs[32];
	int sum = 0;

	for (i = 1; i < 34; i++)
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

	for (i = 0; i < 33; i++)
	{
		if ((fibs[i] % 2) == 0)
			sum += fibs[i];
	}

	printf("%lu\n", sum);

	return (0);
}
