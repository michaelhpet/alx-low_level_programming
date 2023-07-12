#include "search_algos.h"


/**
* interpolation_search - Search for a value in array using interpolation search
* @array: Array to search
* @size: Number of elements in array
* @value: Value to search for
* Return: index of value if found, -1 otherwise
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, m, n;

	if (!array)
		return (-1);

	m = 0;
	n = size - 1;
	while(n >= m)
	{
		i = m + (((double)(n - m) / (array[n] - array[m])) * (value - array[m]));
		if (i >= size)
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		
		if (array[i] > value)
			n = i - 1;
		else
			m = i + 1;
	}

	return (-1);
}
