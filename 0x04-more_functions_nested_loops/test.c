#include <stdio.h>

void main(void)
{
	double n = 100;
	unsigned n_tmp = n;
	int digits;

	digits = (n > 9) ? 2 : 1;

	while ((n_tmp / 10) > 9)
	{
		digits++;
		n_tmp /= 10;
	}

	printf("Number of digits in %.0f is %i\n", n, digits);
}
