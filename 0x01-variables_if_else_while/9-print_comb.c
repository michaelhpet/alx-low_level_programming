#include <stdio.h>

/**
 * main - entry point to program
 * prints combinations of 1-digit numbers
 * Return: retiurns 0 (success)
*/
int main(void)
{
	int number = 0;

	do {
		putchar(number + 48);
		if (number < 9)
		{
			putchar(44);
			putchar(32);
		}
		number++;
	} while (number < 10);

	putchar(10);

	return (0);
}
