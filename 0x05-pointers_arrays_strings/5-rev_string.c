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

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;

	i = 0;
	j = s_len / 2;

	while (j--)
	{
		tmp = s[s_len - i - 1];
		s[s_len - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}
