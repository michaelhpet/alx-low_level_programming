#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string to check
 * Return: number of bytes in the initial segment of s
 * which consist of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, accept_len, count;

	accept_len = _strlen(accept);

	count = 0;
	for (i = 0; accept[i] != 0; i++)
	{
		for (j = 0; j <= accept_len && s[j] != 0; j++)
		{
			if (accept[i] == s[j])
				count++;
		}
	}

	return (count);
}

/**
 * _strlen - compute the length of a string
 * @s: string to parse
 * Return: length of s
 */

unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != 0)
		i++;

	return (i);
}
