#include <stdio.h>

/**
 * main - entry point of program
 * prints two combinations of ints
 * Return: returns 0 (success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				putchar(i + 48);
				putchar(j + 48);
			}

			if (j > i && i < 8 && j < 10)
			{
				putchar(44);
				putchar(32);
			}
		}

	}

	putchar(10);

	return (0);
}
