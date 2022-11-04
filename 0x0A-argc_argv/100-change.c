#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: minimum number of coins
 */

int main(int argc, char *argv[])
{
	int i, cents;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	i = 0;
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;

		i++;
	}

	printf("%i\n", i);

	return (0);
}
