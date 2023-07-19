#include "function_pointers.h"

/**
 * array_iterator - function that executes a functionon each element
 * @array: the array
 * @size: size of the array
 * @action: the function to apply
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && action && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
