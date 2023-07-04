#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square
 * @a: the table we want to use
 * @size: the size of the table
 */
void print_diagsums(int *a, int size)
{
	int i, fdiag = 0, sdiag = 0;

	for (i = 0; i < size; i++)
	{
		fdiag += a[i *size +i];
		sdiag += a[i *size +(size - i - 1)];
	}

	printf("%d, %d\n", fdiag, sdiag);
}
