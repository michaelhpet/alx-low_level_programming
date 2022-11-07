#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *str;

	str = malloc(sizeof(s1) + sizeof(s2) - 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		str[i] = s1[i];

	for (; s2[i] != 0; i++)
		str[i] = s2[i];

	str[i] = s2[i];

	return (str);
}
