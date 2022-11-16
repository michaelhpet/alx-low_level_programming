#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: 0 (success) or non-zero (error)
*/
int main(int argc, char *argv[])
{
	int i, bytes;
	int (*self)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	self = &main;
	for (i = 0; i < bytes; i++)
	{
		printf("%.2x", *(unsigned char *)(self + i));

		if (i < (bytes - 1))
			printf(" ");
	}

	printf("\n");

	return (0);
}
