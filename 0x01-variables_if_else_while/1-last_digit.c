#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 * prints last digit of random number
 * Return: return 0 (success)
*/
int main(void)
{
	int n;
	int last_digit;
	char *greater_than_5 = "Last digit of %d is %d and is greater than 5\n";
	char *equal_to_0 = "Last digit of %d is %d and is 0\n";
	char *less_than_6 = "Last digit of %d is %d and is less than 6 and not 0\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf(greater_than_5, n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf(equal_to_0, n, last_digit);
	}
	else
	{
		printf(less_than_6, n, last_digit);
	}

	return (0);
}
