#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int x, y, z;
	int *row;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(row) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		row = malloc(sizeof(int) * width);
		if (row == NULL)
		{
			for (z = 0; z <= x; z++)
				free(array[z]);
			free(array);
			return (NULL);
		}

		for (y = 0; y < width; y++)
			row[y] = 0;

		array[x] = row;
	}

	return (array);
}
