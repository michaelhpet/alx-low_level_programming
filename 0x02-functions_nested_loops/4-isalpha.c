#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: integer c (ascii code for character)
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c <123))
		return (1);
	else
		return (0);
}
