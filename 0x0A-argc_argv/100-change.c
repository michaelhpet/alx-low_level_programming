#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - prints minimum number of coins to make change for cents
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: min coins to make change
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int coins_len = 5;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		puts("0");
	else
		printf("%i\n", min_coins(atoi(argv[1]), coins, coins_len));

	return (0);
}

/**
 * min_coins - returns minimum number of coins for cents
 * @cents: cents to parse
 * @coins: array of coins
 * @coins_len: length of coins
 * Return: min coins for cent
 */

int min_coins(int cents, int *coins, int coins_len)
{
	int i, tcoins, ttcoins;

	if (cents == 0)
		return (0);

	tcoins = INT_MAX;

	for (i = 0; i < coins_len; i++)
	{
		if (coins[i] <= cents)
		{
			ttcoins = min_coins(cents - coins[i], coins, coins_len);

			if (ttcoins != INT_MAX && ttcoins + 1 < tcoins)
				tcoins = ttcoins + 1;
		}
	}

	return (tcoins);
}
