#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square
 * @a: the table we want to use
 * @size: the size of the table
 */
void print_diagsums(int *a, int size)
{
	int i, j, fdiag = 0, sdiag = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			fdiag += a[i][i];
			sdiag += a[i][size - i - 1];
		}
	}

	printf("%d, %d\n", fdiag, sdiag);
}
