#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (root(n, 0));
}

/**
 * root - computes the root of a number
 * @n: number
 * @guess: initial guess
 * Return: square root of n
 */

int root(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * 2 > n)
		return (-1);

	return (root(n, guess + 1));
}
