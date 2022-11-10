#include <stdlib.h>

/**
 * _realloc - reallocated a memory block using malloc and free
 * @ptr: pointer to old memory address
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to new reallocated memory address
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *mem;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);

	if (ptr == NULL)
		return (mem);

	for (i = 0; i < old_size; i++)
		*((char *)mem + i) = *((char *)ptr + i);

	free(ptr);

	return (mem);
}
