#include "main.h"

/**
 * is_prime_number - checks of an integer is a prime number
 * @n: number
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, 2));
}

/**
 * prime - checks if a number is prime
 * @n: number
 * @denom: initial denominator
 * Return: 1 if n is prime, 0 otherwise
 */

int prime(int n, int denom)
{
	if (denom == n)
		return (1);

	if (n % denom == 0)
		return (0);

	return (prime(n, denom + 1));
}
