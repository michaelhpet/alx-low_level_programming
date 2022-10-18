#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long i, j, _j, tmp_j, k, _k, tmp_k, tmp, _tmp, bil = 1000000000;

	for (i = 1, j = 1, k = 2; i < 91; i++)
	{
		if (i == 1)
			printf("%lu", i);
		else
		{
			printf("%lu", k);
			tmp = j;
			j = k;
			k += tmp;
		}
		printf(", ");
	}

	tmp_j = j, tmp_k = k;
	j /= bil, k /= bil, _j = tmp_j % bil, _k = tmp_k % bil;

	for (i = 0; i < 8; i++)
	{
		printf("%lu", k + (_k / bil));
		printf("%lu", _k % bil);
		tmp = j;
		j = k;
		k += tmp;
		_tmp = _j;
		_j = _k;
		_k += _tmp;

		if (i != 7)
			printf(", ");
	}

	printf("\n");

	return (0);
}
