#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the valur if found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int l = 0, h = 0, j = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (array[h] < value && h < (int)size)
	{
		l = h;
		h += j;	
		printf("Value checked array[%d] = [%d]\n", l, array[l]);
	}

	printf("Value found between indexes [%d] and [%d]\n", l, h);
	while (l < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (value);
		l++;
	}
	return (-1);
}
