#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to string to reverse
 */

void rev_string(char *s)
{
	char *tmp_s = NULL;
	int i, s_len;

	s_len = _strlen(s);
	i = s_len;

	_strcpy(tmp_s, s);
	printf("tmp_s: %s", tmp_s);

	for (; i >= 0; i--)
		s[s_len - i] = tmp_s[i];
}


/**
 * _strlen - computes the length of a string
 * @s: string which length to compute
 * Return: length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * strcpy - copies a string
 * @a: string to copy into
 * @b: string to copy from
 * Return:void
 */

void _strcpy(char *a, char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		a[i] = b[i];
		i++;
	}
	
	a[i] = '\0';
	printf("Copied string: %s", a);
}
