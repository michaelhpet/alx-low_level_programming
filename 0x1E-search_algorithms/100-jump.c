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
	size_t i, step, end;

	if (!array || !size)
		return (-1);

	i = 0;
	end = 0;
	step = sqrt(size);
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		i = end;
		end += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, end);
	if (end > size - 1)
		end = size - 1;

	while (i <= end)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
