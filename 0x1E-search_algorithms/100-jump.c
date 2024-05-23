#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value if found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l = 0, h = 0, j = sqrt(size);
	if (!array || size == 0)
		return (-1);
	while (array[h] < value && h < size)
	{
		l = h;
		h += j;
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l, h);

	h = h < size ? h : size - 1;

	for (; l <= h; l++)
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
	}

	return (-1);
}
