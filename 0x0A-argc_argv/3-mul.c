#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
