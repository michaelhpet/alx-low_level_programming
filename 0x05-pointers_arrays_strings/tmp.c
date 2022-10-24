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
	characters_sum_limit = (22 * 126);

	while (characters_sum <= characters_sum_limit)
	{
		random_character = rand() % 128;
		putchar(random_character);

		characters_sum += random_character;
	}

	putchar(characters_sum - random_character);
	putchar(10);

	return (0);
}
