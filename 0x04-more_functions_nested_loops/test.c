#include <stdio.h>

void main(void)
{
	double n = 9892652971;
	unsigned n_tmp = n;
	int digits;

	if (n > 9)
		digits = 2;
	else
		digits = 1;

	while ((n_tmp / 10) > 10)
	{
		digits++;
		n_tmp /= 10;
	}

	printf("Number of digits in %.0f is %i\n", n, digits);
}
