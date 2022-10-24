#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
	int characters_sum, characters_sum_limit;
	char random_character;

	srand(time(NULL));

	characters_sum = 0;
	characters_sum_limit = (INT_MAX / 128);

	/*we can only have as much as INT_MAX / 128*/
	while (characters_sum <= characters_sum_limit)
	{
		/*a random value for ascii code (between 0 and 128)*/
		random_character = rand() % 128;
		putchar(random_character);

		characters_sum += random_character;
	}

	return (0);
}
