#include <stdio.h>

/**
 * main - entry point to program
 * prints integers (0 - 9)
 * Return: retiurns 0 (success)
*/
int main(void)
{
	int number = 0;

	do {
		printf("%i", number);
		number++;
	} while (number < 10);

	putchar(10);

	return (0);
}
