#include <stdio.h>

/**
 * main - program entry point
 * prints integers 0 - 9 using putchar
 * Return: returns 0 (success)
*/
int main(void)
{
	int number = 0;

	do {
		putchar(number + 48);
		number++;
	} while (number < 10);

	putchar(10);

	return (0);
}
