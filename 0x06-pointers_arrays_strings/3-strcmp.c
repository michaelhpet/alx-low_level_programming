#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	diff = 0;
	for (i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			break;
	}


	return (diff);
}
