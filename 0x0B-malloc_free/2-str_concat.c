#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, s1_len, s2_len;
	char *str;

	s1_len = _strlen(s1), s2_len = _strlen(s2);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (str == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i] != 0; i++)
		str[i] = s1[i];

	if (s2 == NULL)
		s2 = "";

	j = i;
	for (i = 0; s2[i] != 0; i++)
		str[i + j] = s2[i];

	str[i + j] = s2[i];

	return (str);
}

/**
 * _strlen - computes the length of a string
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
	int i;

	if (s == NULL)
		return (0);

	i = 0;
	while (s[i] != 0)
		i++;

	return (i);
}
