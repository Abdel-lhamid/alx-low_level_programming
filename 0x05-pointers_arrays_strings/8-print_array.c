#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n items of an array
 * @a: the array we wanna print
 * @n: the number of items we want to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
