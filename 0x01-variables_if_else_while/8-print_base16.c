#include <stdio.h>

/**
 * main - entry point of program
 * prints base 16 numbers
 * Return: returs 0 (success)
*/
int main(void)
{
	int letter = 0;

	do {
		putchar(letter + 48);
		letter++;
	} while (letter < 10);

	letter = 97;

	do {
		putchar(letter);
		letter++;
	} while (letter <= 102);

	putchar(10);

	return (0);
}
