#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on each element of an
 * array
 * @array: array to iterate
 * @size: size of array
 * @action: callback function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size < 0 || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
