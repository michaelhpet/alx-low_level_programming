#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: arguments' count
 * @av: arguments' vector
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, lens, curr_i;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	lens = 0;
	for (i = 0; i < ac; i++)
		lens += _strlen(av[i]) + 1;

	str = malloc(sizeof(char) * (lens + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	curr_i = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
			str[curr_i + j] = av[i][j];
		str[curr_i + j] = 10;
		curr_i += j + 1;
	}

	str[curr_i + j] = 0;

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
