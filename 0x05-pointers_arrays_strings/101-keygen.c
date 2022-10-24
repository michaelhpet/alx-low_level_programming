#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int random_character, characters_sum, characters_sum_limit;
	time_t time_seed;

	srand((unsigned int) time(&time_seed));

	characters_sum = 0;
	characters_sum_limit = (21 * 126);

	while (characters_sum <= characters_sum_limit)
	{
		random_character = rand() % 128;
		putchar(random_character);

		characters_sum += random_character;
	}

	putchar(characters_sum_limit - random_character);
	putchar(10);

	return (0);
}
