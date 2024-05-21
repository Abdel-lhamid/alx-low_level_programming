#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */

int binary_search(int *array, size_t size, int value)
{
	int m, l, r, i;

	if (!array || size == 0)
		return (-1);

	l = 0;
	r = size - 1;
		while (l <= r)
		{
			m = (l + r) / 2;
			printf("Searching in array: ");
			for (i = l; i <= r; i++)
			{
				printf("%d", array[i]);
				if (i != r)
					printf(", ");
			}
			printf("\n");

			if (array[m] == value)
				return (m);

			if (array[m] < value)
				l = m + 1;
			else
				r = m - 1;
		}
	return (-1);
}
