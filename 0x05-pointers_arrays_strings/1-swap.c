#include "main.h"

/**
 * swap_int - swap the value of 2 integers
 * @a: the first variable to swap
 * @b: the sconde variable to switch
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
