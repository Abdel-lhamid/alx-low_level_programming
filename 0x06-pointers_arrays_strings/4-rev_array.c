#include "main.h"

/**
 * reverse_array - a function that reverse the an int array
 * @a: the array of int
 * @n: sizeof n
 */

void revese_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
