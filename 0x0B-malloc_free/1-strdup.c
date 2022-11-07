#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory which
 * contains a copy of a string
 * @str: string
 * Return: pointer to allocated space
 */

char *_strdup(char *str)
{
	int i, str_len;
	char *str_copy;

	if (str == NULL)
		return (NULL);

	str_len = _strlen(str);
	str_copy = malloc(sizeof(char) * (str_len + 1));

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
		str_copy[i] = str[i];

	str_copy[i] = str[i];

	return (str_copy);
}

/**
 * _strlen - computes the length of a string
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;

	return (i);
}
