#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: size of array
 * @c: initial character
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size <= 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[i] = 0;

	return (arr);
}
