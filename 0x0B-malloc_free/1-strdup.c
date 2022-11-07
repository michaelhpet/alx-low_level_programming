#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory which
 * contains a copy of a string
 * @str: string
 * Return: pointer to allocated space
 */

char *_strdup(char *str)
{
	int i;
	char *str_copy;

	if (str == NULL)
		return (NULL);

	str_copy = malloc(sizeof(str));

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
		str_copy[i] = str[i];

	str_copy[i] = str[i];

	return (str_copy);
}
