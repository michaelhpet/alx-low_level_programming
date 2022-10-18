#include "main.h"

/**
 * main - entry point of program
 * Return: Always returns 0 (success)
 */
int main(void)
{
	int i;
	int ascii_array[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (i = 0; i < 8; i++)
	{
		_putchar(ascii_array[i]);
	}

	_putchar(10);

	return (0);
}
