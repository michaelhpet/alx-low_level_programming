#include "search_algos.h"

void print_array(int *array, size_t left, size_t right);

/**
* binary_search - Search for a value using binary search algorithm
* @array: Array to search
* @size: Number of elements in array
* @value: Value to search for
* Return: Index of value in array, otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;
	int found = -1;

	if (!array)
		return (found);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (found);
}


/**
* print_array - Print an array slice
* @array: Array to print
* @left: Index to start from
* @right: Index to stop at
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (!array)
		return;

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}
