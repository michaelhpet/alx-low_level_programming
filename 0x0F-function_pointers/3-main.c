#include "3-calc.h"

/**
 * main - performs simple arithmetic operations
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: 0 (success), other integers (error)
*/
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = func(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);

	return (0);
}
