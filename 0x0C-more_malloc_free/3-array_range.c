#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number in array
 * @max: maximum number in array
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i - min] = i;

	return (arr);
}
