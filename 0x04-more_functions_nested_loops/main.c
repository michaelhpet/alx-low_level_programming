#include <stdio.h>

int main(void)
{
	int i;

	int base = 10;
	int exp = 1;
	int result = 1;

	for (i = 0; i < exp; i ++)
		result *= base;

	printf("%i\n", result);

	return (0);
}
