#include <stdio.h>

/**
 * main - entry point of program
 * prints alphabets in lowercase in reverse
 * Return: returs 0 (success)
*/
int main(void)
{
	int letter = 122;

	do {
		putchar(letter);
		letter--;
	} while (letter >= 97);

	putchar(10);

	return (0);
}
