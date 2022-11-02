#include "main.h"

/**
 * is_palindrome - checks for palindrome string
 * @s: string
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int s_len;

	if (*s == 0)
		return (1);

	s_len = _strlen(s);

	return (palindrome(s, s_len));
}

/**
 * palindrome - checks for a palindrome string
 * @s: string to check
 * @s_len: length of s
 * Return: 1 if s is palindrome, 0 if not
 */

int palindrome(char *s, int s_len)
{
	if (*s == 0)
		return (1);

	if (*s != *(s + (s_len - 1)))
		return (0);

	return (palindrome(s + 1, s_len - 2));
}

/**
 * _strlen - computes the length of a string
 * @s: string which length to compute
 * Return: length of s
 */

int _strlen(char *s)
{
	if (*s == 0)
		return (0);

	if (*(s + 1) == 0)
		return (1);

	return (1 + _strlen(s + 1));
}
