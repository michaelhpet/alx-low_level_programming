#include "search_algos.h"


/**
* linear_search - Search using linear search
* @array: Array of integers to search
* @size: Number of elements in array
* @value: Value to search for
* Return: Index where value is found, otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int found = -1;

	if (!array)
		return (found);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (found);
}
