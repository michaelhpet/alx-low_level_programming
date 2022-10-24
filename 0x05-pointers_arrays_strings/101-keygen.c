#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the
 * program 101-crackme
 * Return: 0 (success)
 */

int main(void)
{
	int random_character, characters_sum, characters_sum_limit;

	srand((unsigned int)time(NULL));

	characters_sum = 0;
	characters_sum_limit = (22 * 126);

	while (characters_sum <= characters_sum_limit)
	{
		random_character = rand() % 128;
		if (characters_sum + random_character > characters_sum_limit)
			break;
		characters_sum += random_character;

		if (random_character != 92)
			printf("%c", random_character);
	}

	printf("%c\n", characters_sum_limit - characters_sum);

	return (0);
}
