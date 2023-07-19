#include "function_pointers.h"

/**
 * int_index - unction that searches for an integer.
 * @array: the array of int
 * @size: the size of array
 * @cmp: the function we use to compare
 * Return: the index x if we find, other -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	if (array && cmp && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return i;
			}
			i++;
		}
	}
	return -1;
}
