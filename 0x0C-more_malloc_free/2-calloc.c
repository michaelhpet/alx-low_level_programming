#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements/members in array
 * @size: size for each element in array
 * Return: pointer to array address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, bytes;
	void *arr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	bytes = nmemb * size;
	arr = malloc(bytes);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < bytes; i++)
		*((char *)arr + i) = 0;

	return (arr);
}
