#include <stdio.h>

/**
 * main - entry point in program
 * prints combinations of 2 2-digits numbers
 * Return: returns 0 (success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');

			putchar(32);

			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i / 10 != 9 || i % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);

	return (0);
}
