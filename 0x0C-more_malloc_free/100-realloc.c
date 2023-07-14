#include "main.h"
#include <stdlib.h>

/**
 * _realloc - unction that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		else
			return (newptr);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)newptr + i) = *((char *)ptr + i);
	free(ptr);
	return (newptr);
}
