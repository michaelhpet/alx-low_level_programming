#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	str = malloc(sizeof(s1) + sizeof(s2) - 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		str[i] = s1[i];

	j = i;
	for (i = 0; s2[i] != 0; i++)
		str[i + j] = s2[i];

	str[i + j] = s2[i];

	return (str);
}
