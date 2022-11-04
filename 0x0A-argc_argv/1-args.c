#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}

