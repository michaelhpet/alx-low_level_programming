#include <stdio.h>

/**
 * main - entry point of program
 * prints two combinations of ints
 * Return: returns 0 (success)
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (k > j && j > i)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
				}

				if (k > j && j > i && i < 7)
				{
					putchar(44);
					putchar(32);
				}
			}
		}

	}

	putchar(10);

	return (0);
}
