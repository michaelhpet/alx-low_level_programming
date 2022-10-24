#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	char tmp;
	int i, j, s_len;

	s_len = _strlen(s);
	i = 0;
	j = s_len / 2;

	for (; j >= 0; j--)
	{
		tmp = s[s_len - i - 1];
		s[s_len - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}

/**
 * _strlen - computes the length of a string
 * @s: string which length to compute
 * Return: length of s
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
