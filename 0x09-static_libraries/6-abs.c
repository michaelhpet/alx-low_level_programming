#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer which absolute value to compute
 *
 * Return: returns absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
