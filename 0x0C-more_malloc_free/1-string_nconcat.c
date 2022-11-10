#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2 to copy
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j, total_len, s1_len, s2_len;

	s1_len = _strlen(s1), s2_len = _strlen(s2);
	if (n >= s2_len)
		n = s2_len;

	total_len = s1_len + n + 1;
	string = malloc(sizeof(*string) * total_len);

	if (string == NULL)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		string[i] = s1[i];

	for (j = 0; j < n; j++)
		string[j + i] = s2[j];

	string[j + i] = 0;

	return (string);
}

/**
 * _strlen - computes the length of a string
 * @s: string
 * Return: length of s
 */

unsigned int _strlen(char *s)
{
	unsigned int length;

	length = 0;
	while (s[length] != 0)
		length++;

	return (length);
}
