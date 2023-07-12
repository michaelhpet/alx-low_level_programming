#include <math.h>
#include "search_algos.h"


/**
* jump_search - Search for a value using jump search algorithm
* @array: Array to search
* @size: Number of elements in array
* @value: Value to search for
* Return: Index of value in array, -1 otherwise
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (!array || !size)
		return (-1);

	start = 0;
	end = sqrt(size);
	while (array[end] < value && start < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end += sqrt(size);

		if (array[end] == value)
			return (end);
		if (array[start] == value)
			return (start);

		if (end > size - 1)
			end = size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i < end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
