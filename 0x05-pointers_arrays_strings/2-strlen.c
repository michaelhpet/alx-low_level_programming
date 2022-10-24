#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: string which length to compute
 * Return: length of s
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++);

	return length;
}
