#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min valur of the array
 * @max: max value
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr, i, len = max - min + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
